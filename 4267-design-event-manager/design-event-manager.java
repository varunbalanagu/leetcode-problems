import java.util.*;

class EventManager {

    private PriorityQueue<int[]> pq;
    private HashMap<Integer, Integer> map;

    public EventManager(int[][] events) {
        map = new HashMap<>();

        pq = new PriorityQueue<>((a, b) -> {
            if (b[0] != a[0]) return b[0] - a[0]; // higher priority first
            return a[1] - b[1]; // smaller eventId first
        });

        for (int[] e : events) {
            int id = e[0];
            int pr = e[1];
            map.put(id, pr);
            pq.offer(new int[]{pr, id});
        }
    }

    public void updatePriority(int eventId, int newPriority) {
        map.put(eventId, newPriority);
        pq.offer(new int[]{newPriority, eventId}); // push updated entry
    }

    public int pollHighest() {
        while (!pq.isEmpty()) {
            int[] top = pq.poll();
            int pr = top[0];
            int id = top[1];

            // check if this entry is valid (latest)
            if (map.containsKey(id) && map.get(id) == pr) {
                map.remove(id); // mark as inactive
                return id;
            }
        }
        return -1;
    }
}