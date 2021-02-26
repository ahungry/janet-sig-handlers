(import build/sighandler :as sighandler)

(defn main [& xs]
  (sighandler/set-int-handler)
  (while true
    (pp "hi")
    (os/sleep 3)))
