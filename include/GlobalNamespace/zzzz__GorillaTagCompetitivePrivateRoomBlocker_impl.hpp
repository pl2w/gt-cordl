#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitivePrivateRoomBlocker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitivePrivateRoomBlocker_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker::*)()>(&::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker::Update)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x592a0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker::*)()>(&::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592a13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker::__cordl_internal_get_blocker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocker;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker::__cordl_internal_get_blocker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocker;
}
constexpr void GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker::__cordl_internal_set_blocker(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blocker = value;
}
inline void GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker* GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker::GorillaTagCompetitivePrivateRoomBlocker()   {
}
