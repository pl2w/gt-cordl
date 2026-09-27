#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__ReaderWriter@BarrelCannon__BarrelCannonState_def.hpp"
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_def.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_BarrelCannonState_def.hpp"
CORDL_MODULE_EXPORT(UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState)
namespace GlobalNamespace {
struct BarrelCannon_BarrelCannonState;
}
// Forward declare root types
namespace Fusion::CodeGen {
class UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState*, "Fusion.CodeGen", "UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState");
// [WeaverGenerated]
// Dependencies BarrelCannon::BarrelCannonState, Fusion.CodeGen.ReaderWriter@BarrelCannon__BarrelCannonState, Fusion.Internal.UnityValueSurrogate`2<T, TReaderWriter>
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState
class CORDL_TYPE UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState : public ::Fusion::Internal::UnityValueSurrogate_2<::GlobalNamespace::BarrelCannon_BarrelCannonState,::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::GlobalNamespace::BarrelCannon_BarrelCannonState  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::GlobalNamespace::BarrelCannon_BarrelCannonState  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState* New_ctor() ;

constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState const& __cordl_internal_get_Data() const;

constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::GlobalNamespace::BarrelCannon_BarrelCannonState  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2ea2c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2ea1c, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::BarrelCannon_BarrelCannonState get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2ea24, size 0x8, virtual true, abstract: false, final false
inline void set_DataProperty(::GlobalNamespace::BarrelCannon_BarrelCannonState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState(UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState(UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5255};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::BarrelCannon_BarrelCannonState  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState) == 0x18, "Size mismatch!");

} // namespace end def Fusion::CodeGen
