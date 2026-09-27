#pragma once
// IWYU pragma private; include "GlobalNamespace/MenagerieSlot.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenagerieSlot_def.hpp"
#include "GlobalNamespace/zzzz__MenagerieCritter_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenagerieSlot.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieSlot::*)()>(&::GlobalNamespace::MenagerieSlot::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56fcb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieSlot*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieSlot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieSlot::*)()>(&::GlobalNamespace::MenagerieSlot::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56fcb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieSlot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MenagerieSlot::__cordl_internal_get_critterMountPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterMountPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MenagerieSlot::__cordl_internal_get_critterMountPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterMountPoint;
}
constexpr void GlobalNamespace::MenagerieSlot::__cordl_internal_set_critterMountPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___critterMountPoint = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::MenagerieSlot::__cordl_internal_get_label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___label;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::MenagerieSlot::__cordl_internal_get_label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___label;
}
constexpr void GlobalNamespace::MenagerieSlot::__cordl_internal_set_label(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___label = value;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieCritter>& GlobalNamespace::MenagerieSlot::__cordl_internal_get_critter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critter;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieCritter> const& GlobalNamespace::MenagerieSlot::__cordl_internal_get_critter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critter;
}
constexpr void GlobalNamespace::MenagerieSlot::__cordl_internal_set_critter(::UnityW<::GlobalNamespace::MenagerieCritter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___critter = value;
}
inline void GlobalNamespace::MenagerieSlot::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieSlot*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenagerieSlot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieSlot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenagerieSlot* GlobalNamespace::MenagerieSlot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenagerieSlot*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenagerieSlot::MenagerieSlot()   {
}
