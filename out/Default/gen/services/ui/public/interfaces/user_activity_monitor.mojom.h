// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_H_

#include <stdint.h>

#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/optional.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/native_struct.h"
#include "mojo/public/cpp/bindings/native_struct_data_view.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/ui/public/interfaces/user_activity_monitor.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "gpu/config/dx_diag_node.h"
#include "ui/gfx/geometry/point.h"
#include "cc/output/compositor_frame.h"
#include "third_party/skia/include/core/SkImageFilter.h"
#include "gpu/command_buffer/common/sync_token.h"
#include "cc/output/filter_operation.h"
#include "ui/display/display.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "ui/gfx/geometry/insets.h"
#include "base/version.h"
#include "gpu/config/gpu_info.h"
#include "base/time/time.h"
#include "cc/output/filter_operations.h"
#include "base/strings/string16.h"
#include "ui/gfx/selection_bound.h"
#include "gpu/command_buffer/common/capabilities.h"
#include "ui/gfx/geometry/size.h"
#include "base/values.h"
#include "ui/events/latency_info.h"
#include "cc/output/begin_frame_args.h"
#include "cc/output/compositor_frame_metadata.h"
#include "ui/events/event.h"
#include "cc/quads/draw_quad.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/rect_f.h"
#include "cc/quads/render_pass.h"
#include "gpu/command_buffer/common/mailbox_holder.h"
#include "cc/resources/returned_resource.h"
#include "ui/gfx/buffer_types.h"
#include "ui/gfx/geometry/point_f.h"
#include "gpu/command_buffer/common/mailbox.h"
#include "cc/input/selection.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/gfx/native_widget_types.h"
#include "cc/quads/shared_quad_state.h"
#include "cc/resources/transferable_resource.h"
#include "ui/gfx/transform.h"
#include "ui/gfx/geometry/rect.h"
#include "cc/surfaces/surface_sequence.h"
#include "cc/surfaces/surface_id.h"
#include "ui/gfx/geometry/vector2d.h"
#include "cc/quads/render_pass_id.h"


namespace ui {
namespace mojom {
class UserActivityObserver;
using UserActivityObserverPtr = mojo::InterfacePtr<UserActivityObserver>;
using UserActivityObserverPtrInfo = mojo::InterfacePtrInfo<UserActivityObserver>;
using UserActivityObserverRequest = mojo::InterfaceRequest<UserActivityObserver>;
using UserActivityObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<UserActivityObserver>;
using UserActivityObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UserActivityObserver>;
using UserActivityObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UserActivityObserver>;

class UserIdleObserver;
using UserIdleObserverPtr = mojo::InterfacePtr<UserIdleObserver>;
using UserIdleObserverPtrInfo = mojo::InterfacePtrInfo<UserIdleObserver>;
using UserIdleObserverRequest = mojo::InterfaceRequest<UserIdleObserver>;
using UserIdleObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<UserIdleObserver>;
using UserIdleObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UserIdleObserver>;
using UserIdleObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UserIdleObserver>;

class UserActivityMonitor;
using UserActivityMonitorPtr = mojo::InterfacePtr<UserActivityMonitor>;
using UserActivityMonitorPtrInfo = mojo::InterfacePtrInfo<UserActivityMonitor>;
using UserActivityMonitorRequest = mojo::InterfaceRequest<UserActivityMonitor>;
using UserActivityMonitorAssociatedPtr =
    mojo::AssociatedInterfacePtr<UserActivityMonitor>;
using UserActivityMonitorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UserActivityMonitor>;
using UserActivityMonitorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UserActivityMonitor>;


class UserActivityObserverProxy;
class UserActivityObserverStub;

class UserActivityObserverRequestValidator;

class  UserActivityObserver {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = UserActivityObserverProxy;
  using Stub_ = UserActivityObserverStub;

  using RequestValidator_ = UserActivityObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~UserActivityObserver() {}

  virtual void OnUserActivity() = 0;
};

class UserIdleObserverProxy;
class UserIdleObserverStub;

class UserIdleObserverRequestValidator;

class  UserIdleObserver {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = UserIdleObserverProxy;
  using Stub_ = UserIdleObserverStub;

  using RequestValidator_ = UserIdleObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  using IdleState = UserIdleObserver_IdleState;
  virtual ~UserIdleObserver() {}

  virtual void OnUserIdleStateChanged(UserIdleObserver::IdleState new_state) = 0;
};

class UserActivityMonitorProxy;
class UserActivityMonitorStub;

class UserActivityMonitorRequestValidator;

class  UserActivityMonitor {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = UserActivityMonitorProxy;
  using Stub_ = UserActivityMonitorStub;

  using RequestValidator_ = UserActivityMonitorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~UserActivityMonitor() {}

  virtual void AddUserActivityObserver(uint32_t delay_between_notify_secs, UserActivityObserverPtr observer) = 0;

  virtual void AddUserIdleObserver(uint32_t idle_time_in_minutes, UserIdleObserverPtr observer) = 0;
};

class  UserActivityObserverProxy
    : public UserActivityObserver,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit UserActivityObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnUserActivity() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  UserIdleObserverProxy
    : public UserIdleObserver,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit UserIdleObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnUserIdleStateChanged(UserIdleObserver::IdleState new_state) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  UserActivityMonitorProxy
    : public UserActivityMonitor,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit UserActivityMonitorProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddUserActivityObserver(uint32_t delay_between_notify_secs, UserActivityObserverPtr observer) override;
  void AddUserIdleObserver(uint32_t idle_time_in_minutes, UserIdleObserverPtr observer) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  UserActivityObserverStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  UserActivityObserverStub();
  ~UserActivityObserverStub() override;
  void set_sink(UserActivityObserver* sink) { sink_ = sink; }
  UserActivityObserver* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  UserActivityObserver* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  UserIdleObserverStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  UserIdleObserverStub();
  ~UserIdleObserverStub() override;
  void set_sink(UserIdleObserver* sink) { sink_ = sink; }
  UserIdleObserver* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  UserIdleObserver* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  UserActivityMonitorStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  UserActivityMonitorStub();
  ~UserActivityMonitorStub() override;
  void set_sink(UserActivityMonitor* sink) { sink_ = sink; }
  UserActivityMonitor* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  UserActivityMonitor* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  UserActivityObserverRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit UserActivityObserverRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  UserIdleObserverRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit UserIdleObserverRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  UserActivityMonitorRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit UserActivityMonitorRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_H_