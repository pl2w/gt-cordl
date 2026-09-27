#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaFriendColliderHelper.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendColliderHelper_FriendColliderPair_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendColliderHelper_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendColliderHelper_FriendColliderPair_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaFriendColliderHelper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFriendColliderHelper::*)()>(&::GlobalNamespace::GorillaFriendColliderHelper::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5aadb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendColliderHelper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFriendColliderHelper.FindFriendCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaFriendCollider> (::GlobalNamespace::GorillaFriendColliderHelper::*)(::StringW)>(&::GlobalNamespace::GorillaFriendColliderHelper::FindFriendCollider)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5aadbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendColliderHelper*>(),
                        {"FindFriendCollider", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFriendColliderHelper.FindJoinCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> (::GlobalNamespace::GorillaFriendColliderHelper::*)(::StringW)>(&::GlobalNamespace::GorillaFriendColliderHelper::FindJoinCollider)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5aadc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendColliderHelper*>(),
                        {"FindJoinCollider", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFriendColliderHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFriendColliderHelper::*)()>(&::GlobalNamespace::GorillaFriendColliderHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aadd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendColliderHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair>& GlobalNamespace::GorillaFriendColliderHelper::__cordl_internal_get_MappedFriendColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MappedFriendColliders;
}
constexpr ::ArrayW<::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair> const& GlobalNamespace::GorillaFriendColliderHelper::__cordl_internal_get_MappedFriendColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MappedFriendColliders;
}
constexpr void GlobalNamespace::GorillaFriendColliderHelper::__cordl_internal_set_MappedFriendColliders(::ArrayW<::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MappedFriendColliders = value;
}
inline void GlobalNamespace::GorillaFriendColliderHelper::setStaticF_Instance(::UnityW<::GlobalNamespace::GorillaFriendColliderHelper>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaFriendColliderHelper>, "Instance", ::GlobalNamespace::GorillaFriendColliderHelper*>(std::forward<::UnityW<::GlobalNamespace::GorillaFriendColliderHelper>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaFriendColliderHelper> GlobalNamespace::GorillaFriendColliderHelper::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaFriendColliderHelper>, "Instance", ::GlobalNamespace::GorillaFriendColliderHelper*>();
}
inline void GlobalNamespace::GorillaFriendColliderHelper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendColliderHelper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GorillaFriendCollider> GlobalNamespace::GorillaFriendColliderHelper::FindFriendCollider(::StringW  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendColliderHelper*>(),
                        {"FindFriendCollider", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaFriendCollider>>(this, ___internal_method, search);
}
inline ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> GlobalNamespace::GorillaFriendColliderHelper::FindJoinCollider(::StringW  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendColliderHelper*>(),
                        {"FindJoinCollider", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>(this, ___internal_method, search);
}
inline void GlobalNamespace::GorillaFriendColliderHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendColliderHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaFriendColliderHelper* GlobalNamespace::GorillaFriendColliderHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaFriendColliderHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaFriendColliderHelper::GorillaFriendColliderHelper()   {
}
