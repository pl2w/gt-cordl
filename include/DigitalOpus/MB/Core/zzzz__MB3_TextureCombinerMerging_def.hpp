#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerMerging.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_TextureCombinerMerging)
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties;
}
namespace DigitalOpus::MB::Core {
class MB_TexSet;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerMerging;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*, "DigitalOpus.MB.Core", "MB3_TextureCombinerMerging");
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerMerging
class CORDL_TYPE MB3_TextureCombinerMerging : public ::System::Object {
public:
// Declarations
/// @brief Field DO_INTEGRITY_CHECKS, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DO_INTEGRITY_CHECKS, put=setStaticF_DO_INTEGRITY_CHECKS)) bool  DO_INTEGRITY_CHECKS;

/// @brief Field LOG_LEVEL, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field LOG_LEVEL_TRACE_MERGE_MAT_SUBRECTS, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_LOG_LEVEL_TRACE_MERGE_MAT_SUBRECTS, put=setStaticF_LOG_LEVEL_TRACE_MERGE_MAT_SUBRECTS)) bool  LOG_LEVEL_TRACE_MERGE_MAT_SUBRECTS;

/// @brief Field _HasBeenInitialized, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasBeenInitialized, put=__cordl_internal_set__HasBeenInitialized)) bool  _HasBeenInitialized;

/// @brief Field _considerNonTextureProperties, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__considerNonTextureProperties, put=__cordl_internal_set__considerNonTextureProperties)) bool  _considerNonTextureProperties;

/// @brief Field fixOutOfBoundsUVs, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_fixOutOfBoundsUVs, put=__cordl_internal_set_fixOutOfBoundsUVs)) bool  fixOutOfBoundsUVs;

/// @brief Field resultMaterialTextureBlender, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultMaterialTextureBlender, put=__cordl_internal_set_resultMaterialTextureBlender)) ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  resultMaterialTextureBlender;

/// @brief Method BuildTransformMeshUV2AtlasRect, addr 0x9dd04d0, size 0x1dc, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect BuildTransformMeshUV2AtlasRect(bool  considerMeshUVs, ::UnityEngine::Rect  _atlasRect, ::UnityEngine::Rect  _obUVRect, ::UnityEngine::Rect  _sourceMaterialTiling, ::UnityEngine::Rect  _encapsulatingRect) ;

/// @brief Method DoIntegrityCheckMergedEncapsulatingSamplingRects, addr 0x9dd18ec, size 0x7d0, virtual false, abstract: false, final false
inline void DoIntegrityCheckMergedEncapsulatingSamplingRects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  distinctMaterialTextures) ;

/// @brief Method MergeDistinctMaterialTexturesThatWouldExceedMaxAtlasSizeAndCalcMaterialSubrects, addr 0x9dd20bc, size 0xccc, virtual false, abstract: false, final false
inline void MergeDistinctMaterialTexturesThatWouldExceedMaxAtlasSizeAndCalcMaterialSubrects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  distinctMaterialTextures, int32_t  maxAtlasSize) ;

/// @brief Method MergeOverlappingDistinctMaterialTexturesAndCalcMaterialSubrects, addr 0x9dd0710, size 0x11dc, virtual false, abstract: false, final false
inline void MergeOverlappingDistinctMaterialTexturesAndCalcMaterialSubrects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  distinctMaterialTextures) ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerMerging* New_ctor(bool  considerNonTextureProps, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  resultMaterialTexBlender, bool  fixObUVs, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel) ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr bool const& __cordl_internal_get__HasBeenInitialized() const;

constexpr bool& __cordl_internal_get__HasBeenInitialized() ;

constexpr bool const& __cordl_internal_get__considerNonTextureProperties() const;

constexpr bool& __cordl_internal_get__considerNonTextureProperties() ;

constexpr bool const& __cordl_internal_get_fixOutOfBoundsUVs() const;

constexpr bool& __cordl_internal_get_fixOutOfBoundsUVs() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* const& __cordl_internal_get_resultMaterialTextureBlender() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*& __cordl_internal_get_resultMaterialTextureBlender() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set__HasBeenInitialized(bool  value) ;

constexpr void __cordl_internal_set__considerNonTextureProperties(bool  value) ;

constexpr void __cordl_internal_set_fixOutOfBoundsUVs(bool  value) ;

constexpr void __cordl_internal_set_resultMaterialTextureBlender(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  value) ;

/// @brief Method .ctor, addr 0x9dd06ac, size 0x64, virtual false, abstract: false, final false
inline void _ctor(bool  considerNonTextureProps, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  resultMaterialTexBlender, bool  fixObUVs, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel) ;

static inline bool getStaticF_DO_INTEGRITY_CHECKS() ;

static inline bool getStaticF_LOG_LEVEL_TRACE_MERGE_MAT_SUBRECTS() ;

static inline void setStaticF_DO_INTEGRITY_CHECKS(bool  value) ;

static inline void setStaticF_LOG_LEVEL_TRACE_MERGE_MAT_SUBRECTS(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerMerging() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerMerging", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerMerging(MB3_TextureCombinerMerging && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerMerging", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerMerging(MB3_TextureCombinerMerging const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22785};

/// @brief Field _HasBeenInitialized, offset: 0x10, size: 0x1, def value: None
 bool  ____HasBeenInitialized;

/// @brief Field _considerNonTextureProperties, offset: 0x11, size: 0x1, def value: None
 bool  ____considerNonTextureProperties;

/// @brief Field resultMaterialTextureBlender, offset: 0x18, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  ___resultMaterialTextureBlender;

/// @brief Field fixOutOfBoundsUVs, offset: 0x20, size: 0x1, def value: None
 bool  ___fixOutOfBoundsUVs;

/// @brief Field LOG_LEVEL, offset: 0x24, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerMerging, ____HasBeenInitialized) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerMerging, ____considerNonTextureProperties) == 0x11, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerMerging, ___resultMaterialTextureBlender) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerMerging, ___fixOutOfBoundsUVs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerMerging, ___LOG_LEVEL) == 0x24, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerMerging) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
