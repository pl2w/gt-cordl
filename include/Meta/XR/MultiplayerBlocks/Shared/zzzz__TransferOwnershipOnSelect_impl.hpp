#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/TransferOwnershipOnSelect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__TransferOwnershipOnSelect_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ITransferOwnership_def.hpp"
#include "Oculus/Interaction/zzzz__Grabbable_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::Awake)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x9f71724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f7194c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect.OnPointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::*)(::Oculus::Interaction::PointerEvent)>(&::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::OnPointerEventRaised)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9f71a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*>(),
                        {"OnPointerEventRaised", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::LateUpdate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9f71ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f71c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::__cordl_internal_get_UseGravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseGravity;
}
constexpr bool const& Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::__cordl_internal_get_UseGravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseGravity;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::__cordl_internal_set_UseGravity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseGravity = value;
}
constexpr ::UnityW<::Oculus::Interaction::Grabbable>& Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::__cordl_internal_get__grabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr ::UnityW<::Oculus::Interaction::Grabbable> const& Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::__cordl_internal_get__grabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::__cordl_internal_set__grabbable(::UnityW<::Oculus::Interaction::Grabbable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbable = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*& Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::__cordl_internal_get__transferOwnership()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transferOwnership;
}
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership* const& Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::__cordl_internal_get__transferOwnership() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transferOwnership;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::__cordl_internal_set__transferOwnership(::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transferOwnership = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::OnPointerEventRaised(::Oculus::Interaction::PointerEvent  pointerEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*>(),
                        {"OnPointerEventRaised", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent);
}
inline void Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect* Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::TransferOwnershipOnSelect()   {
}
