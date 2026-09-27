#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickIndex_CellIndexUpdateInfo.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickIndex_IndirectionEntryUpdateInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickIndex_CellIndexUpdateInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickIndex_IndirectionEntryUpdateInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProbeBrickIndex_CellIndexUpdateInfo.GetNumberOfChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ProbeBrickIndex_CellIndexUpdateInfo::*)()>(&::GlobalNamespace::ProbeBrickIndex_CellIndexUpdateInfo::GetNumberOfChunks)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb159608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeBrickIndex_CellIndexUpdateInfo>(),
                        {"GetNumberOfChunks", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ProbeBrickIndex_CellIndexUpdateInfo::GetNumberOfChunks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeBrickIndex_CellIndexUpdateInfo>(),
                        {"GetNumberOfChunks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "entriesInfo", ty: "::ArrayW<::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProbeBrickIndex_CellIndexUpdateInfo::ProbeBrickIndex_CellIndexUpdateInfo(::ArrayW<::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo>  entriesInfo) noexcept  {
this->entriesInfo = entriesInfo;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProbeBrickIndex_CellIndexUpdateInfo::ProbeBrickIndex_CellIndexUpdateInfo()   {
}
