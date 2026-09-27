#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/AtlasPackingResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__AtlasPadding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AtlasPackingResult)
namespace DigitalOpus::MB::Core {
struct AtlasPadding;
}
namespace System {
class Object;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class AtlasPackingResult;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::AtlasPackingResult*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::AtlasPackingResult*, "DigitalOpus.MB.Core", "AtlasPackingResult");
// Dependencies DigitalOpus.MB.Core.AtlasPadding, System.Object, UnityEngine.Rect
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.AtlasPackingResult
class CORDL_TYPE AtlasPackingResult : public ::System::Object {
public:
// Declarations
/// @brief Field atlasX, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_atlasX, put=__cordl_internal_set_atlasX)) int32_t  atlasX;

/// @brief Field atlasY, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_atlasY, put=__cordl_internal_set_atlasY)) int32_t  atlasY;

/// @brief Field data, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::System::Object*  data;

/// @brief Field padding, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_padding, put=__cordl_internal_set_padding)) ::ArrayW<::DigitalOpus::MB::Core::AtlasPadding>  padding;

/// @brief Field rects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rects, put=__cordl_internal_set_rects)) ::ArrayW<::UnityEngine::Rect>  rects;

/// @brief Field srcImgIdxs, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_srcImgIdxs, put=__cordl_internal_set_srcImgIdxs)) ::ArrayW<int32_t>  srcImgIdxs;

/// @brief Field usedH, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_usedH, put=__cordl_internal_set_usedH)) int32_t  usedH;

/// @brief Field usedW, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_usedW, put=__cordl_internal_set_usedW)) int32_t  usedW;

/// @brief Method CalcUsedWidthAndHeight, addr 0x9dc09d4, size 0x1cc, virtual false, abstract: false, final false
inline void CalcUsedWidthAndHeight() ;

static inline ::DigitalOpus::MB::Core::AtlasPackingResult* New_ctor(::ArrayW<::DigitalOpus::MB::Core::AtlasPadding>  pds) ;

/// @brief Method ToString, addr 0x9dc0ba0, size 0x224, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_atlasX() const;

constexpr int32_t& __cordl_internal_get_atlasX() ;

constexpr int32_t const& __cordl_internal_get_atlasY() const;

constexpr int32_t& __cordl_internal_get_atlasY() ;

constexpr ::System::Object* const& __cordl_internal_get_data() const;

constexpr ::System::Object*& __cordl_internal_get_data() ;

constexpr ::ArrayW<::DigitalOpus::MB::Core::AtlasPadding> const& __cordl_internal_get_padding() const;

constexpr ::ArrayW<::DigitalOpus::MB::Core::AtlasPadding>& __cordl_internal_get_padding() ;

constexpr ::ArrayW<::UnityEngine::Rect> const& __cordl_internal_get_rects() const;

constexpr ::ArrayW<::UnityEngine::Rect>& __cordl_internal_get_rects() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_srcImgIdxs() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_srcImgIdxs() ;

constexpr int32_t const& __cordl_internal_get_usedH() const;

constexpr int32_t& __cordl_internal_get_usedH() ;

constexpr int32_t const& __cordl_internal_get_usedW() const;

constexpr int32_t& __cordl_internal_get_usedW() ;

constexpr void __cordl_internal_set_atlasX(int32_t  value) ;

constexpr void __cordl_internal_set_atlasY(int32_t  value) ;

constexpr void __cordl_internal_set_data(::System::Object*  value) ;

constexpr void __cordl_internal_set_padding(::ArrayW<::DigitalOpus::MB::Core::AtlasPadding>  value) ;

constexpr void __cordl_internal_set_rects(::ArrayW<::UnityEngine::Rect>  value) ;

constexpr void __cordl_internal_set_srcImgIdxs(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_usedH(int32_t  value) ;

constexpr void __cordl_internal_set_usedW(int32_t  value) ;

/// @brief Method .ctor, addr 0x9dc09a4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::DigitalOpus::MB::Core::AtlasPadding>  pds) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AtlasPackingResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AtlasPackingResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AtlasPackingResult(AtlasPackingResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AtlasPackingResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AtlasPackingResult(AtlasPackingResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22752};

/// @brief Field atlasX, offset: 0x10, size: 0x4, def value: None
 int32_t  ___atlasX;

/// @brief Field atlasY, offset: 0x14, size: 0x4, def value: None
 int32_t  ___atlasY;

/// @brief Field usedW, offset: 0x18, size: 0x4, def value: None
 int32_t  ___usedW;

/// @brief Field usedH, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___usedH;

/// @brief Field rects, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rect>  ___rects;

/// @brief Field padding, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::AtlasPadding>  ___padding;

/// @brief Field srcImgIdxs, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___srcImgIdxs;

/// @brief Field data, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::AtlasPackingResult, ___atlasX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::AtlasPackingResult, ___atlasY) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::AtlasPackingResult, ___usedW) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::AtlasPackingResult, ___usedH) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::AtlasPackingResult, ___rects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::AtlasPackingResult, ___padding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::AtlasPackingResult, ___srcImgIdxs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::AtlasPackingResult, ___data) == 0x38, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::AtlasPackingResult) == 0x40, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
