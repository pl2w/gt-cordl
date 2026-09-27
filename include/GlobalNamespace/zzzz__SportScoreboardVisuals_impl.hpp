#pragma once
// IWYU pragma private; include "GlobalNamespace/SportScoreboardVisuals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SportScoreboardVisuals_def.hpp"
#include "GlobalNamespace/zzzz__MaterialUVOffsetListSetter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SportScoreboardVisuals.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SportScoreboardVisuals::*)()>(&::GlobalNamespace::SportScoreboardVisuals::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5986cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SportScoreboardVisuals*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SportScoreboardVisuals._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SportScoreboardVisuals::*)()>(&::GlobalNamespace::SportScoreboardVisuals::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5986d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SportScoreboardVisuals*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter>& GlobalNamespace::SportScoreboardVisuals::__cordl_internal_get_score1s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___score1s;
}
constexpr ::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter> const& GlobalNamespace::SportScoreboardVisuals::__cordl_internal_get_score1s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___score1s;
}
constexpr void GlobalNamespace::SportScoreboardVisuals::__cordl_internal_set_score1s(::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___score1s = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter>& GlobalNamespace::SportScoreboardVisuals::__cordl_internal_get_score10s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___score10s;
}
constexpr ::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter> const& GlobalNamespace::SportScoreboardVisuals::__cordl_internal_get_score10s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___score10s;
}
constexpr void GlobalNamespace::SportScoreboardVisuals::__cordl_internal_set_score10s(::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___score10s = value;
}
constexpr int32_t& GlobalNamespace::SportScoreboardVisuals::__cordl_internal_get_TeamIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeamIndex;
}
constexpr int32_t const& GlobalNamespace::SportScoreboardVisuals::__cordl_internal_get_TeamIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeamIndex;
}
constexpr void GlobalNamespace::SportScoreboardVisuals::__cordl_internal_set_TeamIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TeamIndex = value;
}
inline void GlobalNamespace::SportScoreboardVisuals::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SportScoreboardVisuals*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SportScoreboardVisuals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SportScoreboardVisuals*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SportScoreboardVisuals* GlobalNamespace::SportScoreboardVisuals::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SportScoreboardVisuals*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SportScoreboardVisuals::SportScoreboardVisuals()   {
}
