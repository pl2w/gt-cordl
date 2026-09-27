#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingSet_CellCounts.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingSet_CellCounts_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProbeVolumeBakingSet_CellCounts.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProbeVolumeBakingSet_CellCounts::*)(::GlobalNamespace::ProbeVolumeBakingSet_CellCounts)>(&::GlobalNamespace::ProbeVolumeBakingSet_CellCounts::Add)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb1661d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeVolumeBakingSet_CellCounts>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::ProbeVolumeBakingSet_CellCounts>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProbeVolumeBakingSet_CellCounts::Add(::GlobalNamespace::ProbeVolumeBakingSet_CellCounts  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeVolumeBakingSet_CellCounts>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::ProbeVolumeBakingSet_CellCounts>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, o);
}
// Ctor Parameters [CppParam { name: "bricksCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "chunksCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProbeVolumeBakingSet_CellCounts::ProbeVolumeBakingSet_CellCounts(int32_t  bricksCount, int32_t  chunksCount) noexcept  {
this->bricksCount = bricksCount;
this->chunksCount = chunksCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProbeVolumeBakingSet_CellCounts::ProbeVolumeBakingSet_CellCounts()   {
}
