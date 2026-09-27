#pragma once
// IWYU pragma private; include "GlobalNamespace/MapModeQueueSet.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MapModeQueueSet_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MapModeQueueSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MapModeQueueSet::*)()>(&::GlobalNamespace::MapModeQueueSet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595a2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MapModeQueueSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& GlobalNamespace::MapModeQueueSet::__cordl_internal_get_maps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maps;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::MapModeQueueSet::__cordl_internal_get_maps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maps;
}
constexpr void GlobalNamespace::MapModeQueueSet::__cordl_internal_set_maps(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maps = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::MapModeQueueSet::__cordl_internal_get_modes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modes;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::MapModeQueueSet::__cordl_internal_get_modes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modes;
}
constexpr void GlobalNamespace::MapModeQueueSet::__cordl_internal_set_modes(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modes = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::MapModeQueueSet::__cordl_internal_get_queues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queues;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::MapModeQueueSet::__cordl_internal_get_queues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queues;
}
constexpr void GlobalNamespace::MapModeQueueSet::__cordl_internal_set_queues(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queues = value;
}
inline void GlobalNamespace::MapModeQueueSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MapModeQueueSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MapModeQueueSet* GlobalNamespace::MapModeQueueSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MapModeQueueSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MapModeQueueSet::MapModeQueueSet()   {
}
