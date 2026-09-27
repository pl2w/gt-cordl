#pragma once
// IWYU pragma private; include "Drawing/DrawingData_Hasher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingData_Hasher)
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct DrawingData_Hasher;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DrawingData_Hasher);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrawingData_Hasher, "Drawing", "DrawingData/Hasher");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/Hasher
struct CORDL_TYPE DrawingData_Hasher {
public:
// Declarations
 __declspec(property(get=get_Hash)) uint64_t  Hash;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::DrawingData_Hasher>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::DrawingData_Hasher>*() ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Add(T  hash) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::GlobalNamespace::DrawingData_Hasher Create(T  init) ;

/// @brief Method Equals, addr 0x55cc1cc, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::DrawingData_Hasher  other) ;

/// @brief Method GetHashCode, addr 0x55ce9e8, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method get_Hash, addr 0x55ce9e0, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_Hash() ;

/// @brief Method get_NotSupplied, addr 0x55cbf64, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::DrawingData_Hasher get_NotSupplied() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::DrawingData_Hasher>"
constexpr ::System::IEquatable_1<::GlobalNamespace::DrawingData_Hasher>* i___System__IEquatable_1___GlobalNamespace__DrawingData_Hasher_() ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawingData_Hasher() ;

// Ctor Parameters [CppParam { name: "hash", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr DrawingData_Hasher(uint64_t  hash) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27727};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field hash, offset: 0x0, size: 0x8, def value: None
 uint64_t  hash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawingData_Hasher, hash) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrawingData_Hasher) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
