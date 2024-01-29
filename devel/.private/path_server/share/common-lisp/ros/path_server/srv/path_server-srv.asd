
(cl:in-package :asdf)

(defsystem "path_server-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "SetPathName" :depends-on ("_package_SetPathName"))
    (:file "_package_SetPathName" :depends-on ("_package"))
    (:file "SetPhotoPoint" :depends-on ("_package_SetPhotoPoint"))
    (:file "_package_SetPhotoPoint" :depends-on ("_package"))
    (:file "SetPointName" :depends-on ("_package_SetPointName"))
    (:file "_package_SetPointName" :depends-on ("_package"))
  ))