#pragma once
// IWYU pragma private; include "GorillaNetworking/SubCosmeticCycleController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/zzzz__SubCosmeticCycleController_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticCollectionDisplay_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.get_Display
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay> (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::get_Display)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c706d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"get_Display", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.get_ActiveCollectable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::CosmeticsController_CosmeticItem> (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::get_ActiveCollectable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c70770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"get_ActiveCollectable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.get_ActiveIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::get_ActiveIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c707c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"get_ActiveIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c707dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.get_HasAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::get_HasAuthority)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c707fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"get_HasAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.GetAppliedCosmeticID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::GetAppliedCosmeticID)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c70894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"GetAppliedCosmeticID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.CycleForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::CycleForward)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c70910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"CycleForward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.CycleBackward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::CycleBackward)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c70d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"CycleBackward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.CycleRandom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::CycleRandom)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c70e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"CycleRandom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.SetIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)(int32_t)>(&::GorillaNetworking::SubCosmeticCycleController::SetIndex)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c70ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"SetIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.SetDisplayVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)(bool)>(&::GorillaNetworking::SubCosmeticCycleController::SetDisplayVisible)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c70f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"SetDisplayVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.Equip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)(int32_t)>(&::GorillaNetworking::SubCosmeticCycleController::Equip)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c70f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"Equip", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.Unequip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)(int32_t)>(&::GorillaNetworking::SubCosmeticCycleController::Unequip)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c70fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"Unequip", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.EquipActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::EquipActive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c71010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"EquipActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.UnequipActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::UnequipActive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c71080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"UnequipActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.EquipAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::EquipAll)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c710f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"EquipAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.UnequipAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::UnequipAll)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c71130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"UnequipAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.IsEquipped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::SubCosmeticCycleController::*)(int32_t)>(&::GorillaNetworking::SubCosmeticCycleController::IsEquipped)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c71170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"IsEquipped", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.BroadcastSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)(int32_t)>(&::GorillaNetworking::SubCosmeticCycleController::BroadcastSignal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c7121c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"BroadcastSignal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.ReceiveNetworkSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)(int32_t)>(&::GorillaNetworking::SubCosmeticCycleController::ReceiveNetworkSignal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c7163c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"ReceiveNetworkSignal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.BroadcastSignalLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)(int32_t)>(&::GorillaNetworking::SubCosmeticCycleController::BroadcastSignalLocal)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5c71260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"BroadcastSignalLocal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.SendBroadcastSignalRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)(int32_t)>(&::GorillaNetworking::SubCosmeticCycleController::SendBroadcastSignalRPC)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5c7135c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"SendBroadcastSignalRPC", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController.SendStateRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::SendStateRPC)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5c709a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"SendStateRPC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticCycleController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticCycleController::*)()>(&::GorillaNetworking::SubCosmeticCycleController::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c717a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaNetworking::SubCosmeticCycleController::__cordl_internal_get_syncCycleOverNetwork()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncCycleOverNetwork;
}
constexpr bool const& GorillaNetworking::SubCosmeticCycleController::__cordl_internal_get_syncCycleOverNetwork() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncCycleOverNetwork;
}
constexpr void GorillaNetworking::SubCosmeticCycleController::__cordl_internal_set_syncCycleOverNetwork(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncCycleOverNetwork = value;
}
constexpr bool& GorillaNetworking::SubCosmeticCycleController::__cordl_internal_get_syncBroadcastOverNetwork()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncBroadcastOverNetwork;
}
constexpr bool const& GorillaNetworking::SubCosmeticCycleController::__cordl_internal_get_syncBroadcastOverNetwork() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncBroadcastOverNetwork;
}
constexpr void GorillaNetworking::SubCosmeticCycleController::__cordl_internal_set_syncBroadcastOverNetwork(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncBroadcastOverNetwork = value;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>& GorillaNetworking::SubCosmeticCycleController::__cordl_internal_get_display()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___display;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticCollectionDisplay> const& GorillaNetworking::SubCosmeticCycleController::__cordl_internal_get_display() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___display;
}
constexpr void GorillaNetworking::SubCosmeticCycleController::__cordl_internal_set_display(::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___display = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GorillaNetworking::SubCosmeticCycleController::__cordl_internal_get_receiveSignalLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveSignalLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GorillaNetworking::SubCosmeticCycleController::__cordl_internal_get_receiveSignalLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveSignalLimiter;
}
constexpr void GorillaNetworking::SubCosmeticCycleController::__cordl_internal_set_receiveSignalLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receiveSignalLimiter = value;
}
inline ::UnityW<::GorillaNetworking::CosmeticCollectionDisplay> GorillaNetworking::SubCosmeticCycleController::get_Display()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"get_Display", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>(this, ___internal_method);
}
inline ::System::Nullable_1<::GlobalNamespace::CosmeticsController_CosmeticItem> GorillaNetworking::SubCosmeticCycleController::get_ActiveCollectable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"get_ActiveCollectable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::CosmeticsController_CosmeticItem>>(this, ___internal_method);
}
inline int32_t GorillaNetworking::SubCosmeticCycleController::get_ActiveIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"get_ActiveIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GorillaNetworking::SubCosmeticCycleController::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GorillaNetworking::SubCosmeticCycleController::get_HasAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"get_HasAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::SubCosmeticCycleController::GetAppliedCosmeticID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"GetAppliedCosmeticID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::SubCosmeticCycleController::CycleForward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"CycleForward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::SubCosmeticCycleController::CycleBackward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"CycleBackward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::SubCosmeticCycleController::CycleRandom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"CycleRandom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::SubCosmeticCycleController::SetIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"SetIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GorillaNetworking::SubCosmeticCycleController::SetDisplayVisible(bool  visible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"SetDisplayVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible);
}
inline void GorillaNetworking::SubCosmeticCycleController::Equip(int32_t  canonicalIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"Equip", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canonicalIndex);
}
inline void GorillaNetworking::SubCosmeticCycleController::Unequip(int32_t  canonicalIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"Unequip", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canonicalIndex);
}
inline void GorillaNetworking::SubCosmeticCycleController::EquipActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"EquipActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::SubCosmeticCycleController::UnequipActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"UnequipActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::SubCosmeticCycleController::EquipAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"EquipAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::SubCosmeticCycleController::UnequipAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"UnequipAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::SubCosmeticCycleController::IsEquipped(int32_t  canonicalIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"IsEquipped", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, canonicalIndex);
}
inline void GorillaNetworking::SubCosmeticCycleController::BroadcastSignal(int32_t  signal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"BroadcastSignal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal);
}
inline void GorillaNetworking::SubCosmeticCycleController::ReceiveNetworkSignal(int32_t  signal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"ReceiveNetworkSignal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal);
}
inline void GorillaNetworking::SubCosmeticCycleController::BroadcastSignalLocal(int32_t  signal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"BroadcastSignalLocal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal);
}
inline void GorillaNetworking::SubCosmeticCycleController::SendBroadcastSignalRPC(int32_t  signal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"SendBroadcastSignalRPC", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal);
}
inline void GorillaNetworking::SubCosmeticCycleController::SendStateRPC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {"SendStateRPC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::SubCosmeticCycleController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticCycleController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::SubCosmeticCycleController* GorillaNetworking::SubCosmeticCycleController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::SubCosmeticCycleController*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::SubCosmeticCycleController::SubCosmeticCycleController()   {
}
