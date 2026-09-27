#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus_def.hpp"
#include "Fusion/Internal/zzzz__UnityArraySurrogate_2_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlStatus_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus)
namespace GlobalNamespace {
struct GorillaPaintbrawlManager_PaintbrawlStatus;
}
// Forward declare root types
namespace Fusion::CodeGen {
class UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus*, "Fusion.CodeGen", "UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus");
// [WeaverGenerated]
// Dependencies Fusion.CodeGen.ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus, Fusion.Internal.UnityArraySurrogate`2<T, ReaderWriter>, GorillaPaintbrawlManager::PaintbrawlStatus
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus
class CORDL_TYPE UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus : public ::Fusion::Internal::UnityArraySurrogate_2<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus,::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> const& __cordl_internal_get_Data() const;

constexpr ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2f2e8, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2f2d8, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2f2e0, size 0x8, virtual true, abstract: false, final false
inline void set_DataProperty(::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus(UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus(UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5281};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus) == 0x18, "Size mismatch!");

} // namespace end def Fusion::CodeGen
