(declare-project
  :name "janet-sig-handlers"
  :description "Sample"
  :author "Matthew Carter"
  :license "GPLv3"
  :url "https://github.com/ahungry/janet-sig-handlers/"
  :repo "git+https://github.com/ahungry/janet-sig-handlers.git")

(declare-native
  :name "sighandler"
  :source @["sighandler.c"])
