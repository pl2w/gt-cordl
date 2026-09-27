#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticSceneGroup.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticSceneGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticSceneGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticSceneGroup::*)()>(&::GlobalNamespace::MetaXRAcousticSceneGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebaaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSceneGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& GlobalNamespace::MetaXRAcousticSceneGroup::__cordl_internal_get_sceneGuids()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneGuids;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::MetaXRAcousticSceneGroup::__cordl_internal_get_sceneGuids() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneGuids;
}
constexpr void GlobalNamespace::MetaXRAcousticSceneGroup::__cordl_internal_set_sceneGuids(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneGuids = value;
}
inline void GlobalNamespace::MetaXRAcousticSceneGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSceneGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticSceneGroup* GlobalNamespace::MetaXRAcousticSceneGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticSceneGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticSceneGroup::MetaXRAcousticSceneGroup()   {
}
