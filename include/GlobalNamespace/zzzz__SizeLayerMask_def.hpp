#pragma once
// IWYU pragma private; include "GlobalNamespace/SizeLayerMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SizeLayerMask)
// Forward declare root types
namespace GlobalNamespace {
class SizeLayerMask;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SizeLayerMask*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SizeLayerMask*, "", "SizeLayerMask");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SizeLayerMask
class CORDL_TYPE SizeLayerMask : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Mask)) int32_t  Mask;

/// @brief Field affectLayerA, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_affectLayerA, put=__cordl_internal_set_affectLayerA)) bool  affectLayerA;

/// @brief Field affectLayerB, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_affectLayerB, put=__cordl_internal_set_affectLayerB)) bool  affectLayerB;

/// @brief Field affectLayerC, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_affectLayerC, put=__cordl_internal_set_affectLayerC)) bool  affectLayerC;

/// @brief Field affectLayerD, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_affectLayerD, put=__cordl_internal_set_affectLayerD)) bool  affectLayerD;

static inline ::GlobalNamespace::SizeLayerMask* New_ctor() ;

constexpr bool const& __cordl_internal_get_affectLayerA() const;

constexpr bool& __cordl_internal_get_affectLayerA() ;

constexpr bool const& __cordl_internal_get_affectLayerB() const;

constexpr bool& __cordl_internal_get_affectLayerB() ;

constexpr bool const& __cordl_internal_get_affectLayerC() const;

constexpr bool& __cordl_internal_get_affectLayerC() ;

constexpr bool const& __cordl_internal_get_affectLayerD() const;

constexpr bool& __cordl_internal_get_affectLayerD() ;

constexpr void __cordl_internal_set_affectLayerA(bool  value) ;

constexpr void __cordl_internal_set_affectLayerB(bool  value) ;

constexpr void __cordl_internal_set_affectLayerC(bool  value) ;

constexpr void __cordl_internal_set_affectLayerD(bool  value) ;

/// @brief Method .ctor, addr 0x595d950, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Mask, addr 0x595d7b4, size 0x38, virtual false, abstract: false, final false
inline int32_t get_Mask() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SizeLayerMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SizeLayerMask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SizeLayerMask(SizeLayerMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SizeLayerMask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SizeLayerMask(SizeLayerMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2349};

/// [SerializeField]
/// @brief Field affectLayerA, offset: 0x10, size: 0x1, def value: None
 bool  ___affectLayerA;

/// [SerializeField]
/// @brief Field affectLayerB, offset: 0x11, size: 0x1, def value: None
 bool  ___affectLayerB;

/// [SerializeField]
/// @brief Field affectLayerC, offset: 0x12, size: 0x1, def value: None
 bool  ___affectLayerC;

/// [SerializeField]
/// @brief Field affectLayerD, offset: 0x13, size: 0x1, def value: None
 bool  ___affectLayerD;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SizeLayerMask, ___affectLayerA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeLayerMask, ___affectLayerB) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeLayerMask, ___affectLayerC) == 0x12, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeLayerMask, ___affectLayerD) == 0x13, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SizeLayerMask) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
