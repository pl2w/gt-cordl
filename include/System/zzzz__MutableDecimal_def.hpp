#pragma once
// IWYU pragma private; include "System/MutableDecimal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MutableDecimal)
// Forward declare root types
namespace System {
struct MutableDecimal;
}
// Write type traits
MARK_VAL_T(::System::MutableDecimal);
DEFINE_IL2CPP_CLASS(::System::MutableDecimal, "System", "MutableDecimal");
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.MutableDecimal
struct CORDL_TYPE MutableDecimal {
public:
// Declarations
 __declspec(property(get=get_IsNegative, put=set_IsNegative)) bool  IsNegative;

 __declspec(property(get=get_Scale, put=set_Scale)) int32_t  Scale;

/// @brief Method get_IsNegative, addr 0xa2ffac8, size 0xc, virtual false, abstract: false, final false
inline bool get_IsNegative() ;

/// @brief Method get_Scale, addr 0xa2ffaf0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Scale() ;

/// @brief Method set_IsNegative, addr 0xa2ffad4, size 0x1c, virtual false, abstract: false, final false
inline void set_IsNegative(bool  value) ;

/// @brief Method set_Scale, addr 0xa2ffaf8, size 0x14, virtual false, abstract: false, final false
inline void set_Scale(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr MutableDecimal() ;

// Ctor Parameters [CppParam { name: "Flags", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "High", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Low", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Mid", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr MutableDecimal(uint32_t  Flags, uint32_t  High, uint32_t  Low, uint32_t  Mid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5631};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Flags, offset: 0x0, size: 0x4, def value: None
 uint32_t  Flags;

/// @brief Field High, offset: 0x4, size: 0x4, def value: None
 uint32_t  High;

/// @brief Field Low, offset: 0x8, size: 0x4, def value: None
 uint32_t  Low;

/// @brief Field Mid, offset: 0xc, size: 0x4, def value: None
 uint32_t  Mid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::MutableDecimal, Flags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::MutableDecimal, High) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::MutableDecimal, Low) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::MutableDecimal, Mid) == 0xc, "Offset mismatch!");

static_assert(sizeof(::System::MutableDecimal) == 0x10, "Size mismatch!");

} // namespace end def System
