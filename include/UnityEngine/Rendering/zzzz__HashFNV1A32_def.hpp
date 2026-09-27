#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HashFNV1A32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashFNV1A32)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct HashFNV1A32;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::HashFNV1A32);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::HashFNV1A32, "UnityEngine.Rendering", "HashFNV1A32");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies 
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.HashFNV1A32
struct CORDL_TYPE HashFNV1A32 {
public:
// Declarations
 __declspec(property(get=get_value)) int32_t  value;

/// @brief Method Append, addr 0xb19671c, size 0x64, virtual false, abstract: false, final false
inline void Append(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  input) ;

/// @brief Method Append, addr 0xb196780, size 0x88, virtual false, abstract: false, final false
inline void Append(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  input) ;

/// @brief Method Append, addr 0xb196808, size 0x9c, virtual false, abstract: false, final false
inline void Append(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector4>  input) ;

/// @brief Method Append, addr 0xb196680, size 0x28, virtual false, abstract: false, final false
inline void Append(/* [IsReadOnly] */ ::by_ref<bool>  input) ;

/// @brief Method Append, addr 0xb1966e4, size 0x38, virtual false, abstract: false, final false
inline void Append(/* [IsReadOnly] */ ::by_ref<double_t>  input) ;

/// @brief Method Append, addr 0xb1966a8, size 0x3c, virtual false, abstract: false, final false
inline void Append(/* [IsReadOnly] */ ::by_ref<float_t>  input) ;

/// @brief Method Append, addr 0xb196640, size 0x20, virtual false, abstract: false, final false
inline void Append(/* [IsReadOnly] */ ::by_ref<int32_t>  input) ;

/// @brief Method Append, addr 0xb196660, size 0x20, virtual false, abstract: false, final false
inline void Append(/* [IsReadOnly] */ ::by_ref<uint32_t>  input) ;

/// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Append(T  input) ;

/// @brief Method Create, addr 0xb196634, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::HashFNV1A32 Create() ;

/// @brief Method GetHashCode, addr 0xb1968ac, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method get_value, addr 0xb1968a4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_value() ;

// Ctor Parameters []
// @brief default ctor
constexpr HashFNV1A32() ;

// Ctor Parameters [CppParam { name: "m_Hash", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr HashFNV1A32(uint32_t  m_Hash) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17028};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_OffsetBasis offset 0xffffffff size 0x4
static constexpr uint32_t  k_OffsetBasis{static_cast<uint32_t>(0x811c9dc5u)};

/// @brief Field k_Prime offset 0xffffffff size 0x4
static constexpr uint32_t  k_Prime{static_cast<uint32_t>(0x1000193u)};

/// @brief Field m_Hash, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_Hash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::HashFNV1A32, m_Hash) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::HashFNV1A32) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
