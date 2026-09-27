#pragma once
// IWYU pragma private; include "Photon/Voice/Flip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Flip)
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice {
struct Flip;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::Flip);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Flip, "Photon.Voice", "Flip");
// Dependencies 
namespace Photon::Voice {
// Is value type: true
// CS Name: Photon.Voice.Flip
struct CORDL_TYPE Flip {
public:
// Declarations
/// @brief Field Both, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_Both, put=setStaticF_Both)) ::Photon::Voice::Flip  Both;

/// @brief Field Horizontal, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_Horizontal, put=setStaticF_Horizontal)) ::Photon::Voice::Flip  Horizontal;

 __declspec(property(get=get_IsHorizontal, put=set_IsHorizontal)) bool  IsHorizontal;

 __declspec(property(get=get_IsVertical, put=set_IsVertical)) bool  IsVertical;

/// @brief Field None, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Photon::Voice::Flip  None;

/// @brief Field Vertical, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_Vertical, put=setStaticF_Vertical)) ::Photon::Voice::Flip  Vertical;

/// @brief Method Equals, addr 0xa7534e8, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xa753558, size 0x64, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Photon::Voice::Flip getStaticF_Both() ;

static inline ::Photon::Voice::Flip getStaticF_Horizontal() ;

static inline ::Photon::Voice::Flip getStaticF_None() ;

static inline ::Photon::Voice::Flip getStaticF_Vertical() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_IsHorizontal, addr 0xa753398, size 0x8, virtual false, abstract: false, final false
inline bool get_IsHorizontal() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_IsVertical, addr 0xa753388, size 0x8, virtual false, abstract: false, final false
inline bool get_IsVertical() ;

/// @brief Method op_Equality, addr 0xa7533a8, size 0xa0, virtual false, abstract: false, final false
static inline bool op_Equality(::Photon::Voice::Flip  f1, ::Photon::Voice::Flip  f2) ;

/// @brief Method op_Inequality, addr 0xa753448, size 0xa0, virtual false, abstract: false, final false
static inline bool op_Inequality(::Photon::Voice::Flip  f1, ::Photon::Voice::Flip  f2) ;

/// @brief Method op_Multiply, addr 0xa7535bc, size 0x94, virtual false, abstract: false, final false
static inline ::Photon::Voice::Flip op_Multiply(::Photon::Voice::Flip  f1, ::Photon::Voice::Flip  f2) ;

static inline void setStaticF_Both(::Photon::Voice::Flip  value) ;

static inline void setStaticF_Horizontal(::Photon::Voice::Flip  value) ;

static inline void setStaticF_None(::Photon::Voice::Flip  value) ;

static inline void setStaticF_Vertical(::Photon::Voice::Flip  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsHorizontal, addr 0xa7533a0, size 0x8, virtual false, abstract: false, final false
inline void set_IsHorizontal(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsVertical, addr 0xa753390, size 0x8, virtual false, abstract: false, final false
inline void set_IsVertical(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Flip() ;

// Ctor Parameters [CppParam { name: "_IsVertical_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_IsHorizontal_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr Flip(bool  _IsVertical_k__BackingField, bool  _IsHorizontal_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28477};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// [CompilerGenerated]
/// @brief Field <IsVertical>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _IsVertical_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsHorizontal>k__BackingField, offset: 0x1, size: 0x1, def value: None
 bool  _IsHorizontal_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Flip, _IsVertical_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Flip, _IsHorizontal_k__BackingField) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Flip) == 0x2, "Size mismatch!");

} // namespace end def Photon::Voice
