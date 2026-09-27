#pragma once
// IWYU pragma private; include "Fusion/Vector3Compressed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3Compressed)
namespace Fusion {
class INetworkStruct;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion {
struct Vector3Compressed;
}
// Write type traits
MARK_VAL_T(::Fusion::Vector3Compressed);
DEFINE_IL2CPP_CLASS(::Fusion::Vector3Compressed, "Fusion", "Vector3Compressed");
// [NetworkStructWeaved(3)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.Vector3Compressed
struct CORDL_TYPE Vector3Compressed {
public:
// Declarations
 __declspec(property(get=get_X, put=set_X)) float_t  X;

 __declspec(property(get=get_Y, put=set_Y)) float_t  Y;

 __declspec(property(get=get_Z, put=set_Z)) float_t  Z;

/// @brief Field xEncoded, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_xEncoded, put=__cordl_internal_set_xEncoded)) int32_t  xEncoded;

/// @brief Field yEncoded, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_yEncoded, put=__cordl_internal_set_yEncoded)) int32_t  yEncoded;

/// @brief Field zEncoded, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_zEncoded, put=__cordl_internal_set_zEncoded)) int32_t  zEncoded;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::Vector3Compressed>"
constexpr operator  ::System::IEquatable_1<::Fusion::Vector3Compressed>*() ;

/// @brief Method Equals, addr 0x5f9d1a0, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5f9d16c, size 0x34, virtual true, abstract: false, final true
inline bool Equals(::Fusion::Vector3Compressed  other) ;

/// @brief Method GetHashCode, addr 0x5f9d238, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

constexpr int32_t const& __cordl_internal_get_xEncoded() const;

constexpr int32_t& __cordl_internal_get_xEncoded() ;

constexpr int32_t const& __cordl_internal_get_yEncoded() const;

constexpr int32_t& __cordl_internal_get_yEncoded() ;

constexpr int32_t const& __cordl_internal_get_zEncoded() const;

constexpr int32_t& __cordl_internal_get_zEncoded() ;

constexpr void __cordl_internal_set_xEncoded(int32_t  value) ;

constexpr void __cordl_internal_set_yEncoded(int32_t  value) ;

constexpr void __cordl_internal_set_zEncoded(int32_t  value) ;

/// @brief Method get_X, addr 0x5f9ca7c, size 0x60, virtual false, abstract: false, final false
inline float_t get_X() ;

/// @brief Method get_Y, addr 0x5f9cb80, size 0x60, virtual false, abstract: false, final false
inline float_t get_Y() ;

/// @brief Method get_Z, addr 0x5f9cc84, size 0x60, virtual false, abstract: false, final false
inline float_t get_Z() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::Vector3Compressed>"
constexpr ::System::IEquatable_1<::Fusion::Vector3Compressed>* i___System__IEquatable_1___Fusion__Vector3Compressed_() ;

/// @brief Method op_Equality, addr 0x5f9d258, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::Vector3Compressed  left, ::Fusion::Vector3Compressed  right) ;

/// @brief Method op_Implicit, addr 0x5f9cfd4, size 0xf8, virtual false, abstract: false, final false
static inline ::Fusion::Vector3Compressed op_Implicit___Fusion__Vector3Compressed(::UnityEngine::Vector2  v) ;

/// @brief Method op_Implicit, addr 0x5f9cd88, size 0x164, virtual false, abstract: false, final false
static inline ::Fusion::Vector3Compressed op_Implicit___Fusion__Vector3Compressed(::UnityEngine::Vector3  v) ;

/// @brief Method op_Implicit, addr 0x5f9d0cc, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::Fusion::Vector3Compressed  q) ;

/// @brief Method op_Implicit, addr 0x5f9ceec, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::Fusion::Vector3Compressed  q) ;

/// @brief Method op_Inequality, addr 0x5f9d268, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::Vector3Compressed  left, ::Fusion::Vector3Compressed  right) ;

/// @brief Method set_X, addr 0x5f9cadc, size 0xa4, virtual false, abstract: false, final false
inline void set_X(float_t  value) ;

/// @brief Method set_Y, addr 0x5f9cbe0, size 0xa4, virtual false, abstract: false, final false
inline void set_Y(float_t  value) ;

/// @brief Method set_Z, addr 0x5f9cce4, size 0xa4, virtual false, abstract: false, final false
inline void set_Z(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Vector3Compressed() ;

// Ctor Parameters [CppParam { name: "xEncoded", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "yEncoded", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "zEncoded", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Vector3Compressed(int32_t  xEncoded, int32_t  yEncoded, int32_t  zEncoded) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___xEncoded_padding[0x0];
/// @brief Field xEncoded, offset: 0x0, size: 0x4, def value: None
 int32_t  ___xEncoded;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___xEncoded_padding_forAlignment[0x0];
/// @brief Field xEncoded, offset: 0x0, size: 0x4, def value: None
 int32_t  ___xEncoded_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___yEncoded_padding[0x4];
/// @brief Field yEncoded, offset: 0x4, size: 0x4, def value: None
 int32_t  ___yEncoded;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___yEncoded_padding_forAlignment[0x4];
/// @brief Field yEncoded, offset: 0x4, size: 0x4, def value: None
 int32_t  ___yEncoded_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___zEncoded_padding[0x8];
/// @brief Field zEncoded, offset: 0x8, size: 0x4, def value: None
 int32_t  ___zEncoded;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___zEncoded_padding_forAlignment[0x8];
/// @brief Field zEncoded, offset: 0x8, size: 0x4, def value: None
 int32_t  ___zEncoded_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19015};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Vector3Compressed) == 0xc, "Size mismatch!");

} // namespace end def Fusion
