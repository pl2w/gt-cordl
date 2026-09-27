#pragma once
// IWYU pragma private; include "UnityEngine/BoundsInt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoundsInt)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine {
struct BoundsInt;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BoundsInt);
DEFINE_IL2CPP_CLASS(::UnityEngine::BoundsInt, "UnityEngine", "BoundsInt");
// [UsedByNativeCode]
// Dependencies UnityEngine.Vector3Int
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.BoundsInt
struct CORDL_TYPE BoundsInt {
public:
// Declarations
 __declspec(property(get=get_max, put=set_max)) ::UnityEngine::Vector3Int  max;

 __declspec(property(get=get_min, put=set_min)) ::UnityEngine::Vector3Int  min;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3Int  position;

 __declspec(property(get=get_size, put=set_size)) ::UnityEngine::Vector3Int  size;

 __declspec(property(get=get_xMax, put=set_xMax)) int32_t  xMax;

 __declspec(property(get=get_xMin, put=set_xMin)) int32_t  xMin;

 __declspec(property(get=get_yMax, put=set_yMax)) int32_t  yMax;

 __declspec(property(get=get_yMin, put=set_yMin)) int32_t  yMin;

 __declspec(property(get=get_zMax, put=set_zMax)) int32_t  zMax;

 __declspec(property(get=get_zMin, put=set_zMin)) int32_t  zMin;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::BoundsInt>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::BoundsInt>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Contains, addr 0xb5750e4, size 0x1ac, virtual false, abstract: false, final false
inline bool Contains(::UnityEngine::Vector3Int  position) ;

/// @brief Method Equals, addr 0xb575454, size 0xc8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0xb57551c, size 0x6c, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::BoundsInt  other) ;

/// @brief Method GetHashCode, addr 0xb575588, size 0xd4, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb575290, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb5752a0, size 0xdc, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb5750d0, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3Int  position, ::UnityEngine::Vector3Int  size) ;

/// @brief Method get_max, addr 0xb574b54, size 0x118, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3Int get_max() ;

/// @brief Method get_min, addr 0xb574904, size 0x118, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3Int get_min() ;

/// @brief Method get_position, addr 0xb575098, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3Int get_position() ;

/// @brief Method get_size, addr 0xb5750b4, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3Int get_size() ;

/// @brief Method get_xMax, addr 0xb574f3c, size 0x64, virtual false, abstract: false, final false
inline int32_t get_xMax() ;

/// @brief Method get_xMin, addr 0xb574c90, size 0x64, virtual false, abstract: false, final false
inline int32_t get_xMin() ;

/// @brief Method get_yMax, addr 0xb574fb0, size 0x64, virtual false, abstract: false, final false
inline int32_t get_yMax() ;

/// @brief Method get_yMin, addr 0xb574d74, size 0x64, virtual false, abstract: false, final false
inline int32_t get_yMin() ;

/// @brief Method get_zMax, addr 0xb575024, size 0x64, virtual false, abstract: false, final false
inline int32_t get_zMax() ;

/// @brief Method get_zMin, addr 0xb574e58, size 0x64, virtual false, abstract: false, final false
inline int32_t get_zMin() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::BoundsInt>"
constexpr ::System::IEquatable_1<::UnityEngine::BoundsInt>* i___System__IEquatable_1___UnityEngine__BoundsInt_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Equality, addr 0xb57537c, size 0x6c, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::BoundsInt  lhs, ::UnityEngine::BoundsInt  rhs) ;

/// @brief Method op_Inequality, addr 0xb5753e8, size 0x6c, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::BoundsInt  lhs, ::UnityEngine::BoundsInt  rhs) ;

/// @brief Method set_max, addr 0xb574c6c, size 0x24, virtual false, abstract: false, final false
inline void set_max(::UnityEngine::Vector3Int  value) ;

/// @brief Method set_min, addr 0xb574a1c, size 0x138, virtual false, abstract: false, final false
inline void set_min(::UnityEngine::Vector3Int  value) ;

/// @brief Method set_position, addr 0xb5750a8, size 0xc, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3Int  value) ;

/// @brief Method set_size, addr 0xb5750c4, size 0xc, virtual false, abstract: false, final false
inline void set_size(::UnityEngine::Vector3Int  value) ;

/// @brief Method set_xMax, addr 0xb574fa0, size 0x10, virtual false, abstract: false, final false
inline void set_xMax(int32_t  value) ;

/// @brief Method set_xMin, addr 0xb574cf4, size 0x80, virtual false, abstract: false, final false
inline void set_xMin(int32_t  value) ;

/// @brief Method set_yMax, addr 0xb575014, size 0x10, virtual false, abstract: false, final false
inline void set_yMax(int32_t  value) ;

/// @brief Method set_yMin, addr 0xb574dd8, size 0x80, virtual false, abstract: false, final false
inline void set_yMin(int32_t  value) ;

/// @brief Method set_zMax, addr 0xb575088, size 0x10, virtual false, abstract: false, final false
inline void set_zMax(int32_t  value) ;

/// @brief Method set_zMin, addr 0xb574ebc, size 0x80, virtual false, abstract: false, final false
inline void set_zMin(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BoundsInt() ;

// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Size", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None, comment: None }]
constexpr BoundsInt(::UnityEngine::Vector3Int  m_Position, ::UnityEngine::Vector3Int  m_Size) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14838};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  m_Position;

/// @brief Field m_Size, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  m_Size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::BoundsInt, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoundsInt, m_Size) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::BoundsInt) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
