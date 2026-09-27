#pragma once
// IWYU pragma private; include "CosmeticRoom/FittingRoom.hpp"
#include "GlobalNamespace/zzzz__FittingRoomButton_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "CosmeticRoom/zzzz__FittingRoom_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::CosmeticRoom::FittingRoom.InitializeForCustomMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::FittingRoom::*)(bool)>(&::CosmeticRoom::FittingRoom::InitializeForCustomMap)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c4dd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::FittingRoom*>(),
                        {"InitializeForCustomMap", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::FittingRoom.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::FittingRoom::*)()>(&::CosmeticRoom::FittingRoom::OnEnable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c4deb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::FittingRoom*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::FittingRoom.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::FittingRoom::*)()>(&::CosmeticRoom::FittingRoom::OnDisable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c4df3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::FittingRoom*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::FittingRoom.UpdateFromCart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::FittingRoom::*)(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*, ::GorillaNetworking::CosmeticsController_CosmeticSet*)>(&::CosmeticRoom::FittingRoom::UpdateFromCart)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5c4e040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::FittingRoom*>(),
                        {"UpdateFromCart", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>(), ::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::FittingRoom._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::FittingRoom::*)()>(&::CosmeticRoom::FittingRoom::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4e414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::FittingRoom*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FittingRoomButton>>& CosmeticRoom::FittingRoom::__cordl_internal_get_fittingRoomButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fittingRoomButtons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FittingRoomButton>> const& CosmeticRoom::FittingRoom::__cordl_internal_get_fittingRoomButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fittingRoomButtons;
}
constexpr void CosmeticRoom::FittingRoom::__cordl_internal_set_fittingRoomButtons(::ArrayW<::UnityW<::GlobalNamespace::FittingRoomButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fittingRoomButtons = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& CosmeticRoom::FittingRoom::__cordl_internal_get_consoleMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___consoleMesh;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& CosmeticRoom::FittingRoom::__cordl_internal_get_consoleMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___consoleMesh;
}
constexpr void CosmeticRoom::FittingRoom::__cordl_internal_set_consoleMesh(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___consoleMesh = value;
}
constexpr int32_t& CosmeticRoom::FittingRoom::__cordl_internal_get_iterator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iterator;
}
constexpr int32_t const& CosmeticRoom::FittingRoom::__cordl_internal_get_iterator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iterator;
}
constexpr void CosmeticRoom::FittingRoom::__cordl_internal_set_iterator(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iterator = value;
}
constexpr bool& CosmeticRoom::FittingRoom::__cordl_internal_get_addOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addOnEnable;
}
constexpr bool const& CosmeticRoom::FittingRoom::__cordl_internal_get_addOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addOnEnable;
}
constexpr void CosmeticRoom::FittingRoom::__cordl_internal_set_addOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addOnEnable = value;
}
inline void CosmeticRoom::FittingRoom::InitializeForCustomMap(bool  useCustomConsoleMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::FittingRoom*>(),
                        {"InitializeForCustomMap", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useCustomConsoleMesh);
}
inline void CosmeticRoom::FittingRoom::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::FittingRoom*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::FittingRoom::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::FittingRoom*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::FittingRoom::UpdateFromCart(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  currentCart, ::GorillaNetworking::CosmeticsController_CosmeticSet*  tryOnSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::FittingRoom*>(),
                        {"UpdateFromCart", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>(), ::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentCart, tryOnSet);
}
inline void CosmeticRoom::FittingRoom::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::FittingRoom*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CosmeticRoom::FittingRoom* CosmeticRoom::FittingRoom::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CosmeticRoom::FittingRoom*>());
}
// Ctor Parameters []
constexpr ::CosmeticRoom::FittingRoom::FittingRoom()   {
}
