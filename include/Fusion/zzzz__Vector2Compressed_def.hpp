#pragma once
// IWYU pragma private; include "Fusion/Vector2Compressed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2Compressed)
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
// Forward declare root types
namespace Fusion {
struct Vector2Compressed;
}
// Write type traits
MARK_VAL_T(::Fusion::Vector2Compressed);
DEFINE_IL2CPP_CLASS(::Fusion::Vector2Compressed, "Fusion", "Vector2Compressed");
// [NetworkStructWeaved(2)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.Vector2Compressed
struct CORDL_TYPE Vector2Compressed {
public:
// Declarations
 __declspec(property(get=get_X, put=set_X)) float_t  X;

 __declspec(property(get=get_Y, put=set_Y)) float_t  Y;

/// @brief Field xEncoded, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_xEncoded, put=__cordl_internal_set_xEncoded)) int32_t  xEncoded;

/// @brief Field yEncoded, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_yEncoded, put=__cordl_internal_set_yEncoded)) int32_t  yEncoded;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::Vector2Compressed>"
constexpr operator  ::System::IEquatable_1<::Fusion::Vector2Compressed>*() ;

/// @brief Method Equals, addr 0x5f9c9c8, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5f9c9a0, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::Fusion::Vector2Compressed  other) ;

/// @brief Method GetHashCode, addr 0x5f9ca50, size 0x14, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

constexpr int32_t const& __cordl_internal_get_xEncoded() const;

constexpr int32_t& __cordl_internal_get_xEncoded() ;

constexpr int32_t const& __cordl_internal_get_yEncoded() const;

constexpr int32_t& __cordl_internal_get_yEncoded() ;

constexpr void __cordl_internal_set_xEncoded(int32_t  value) ;

constexpr void __cordl_internal_set_yEncoded(int32_t  value) ;

/// @brief Method get_X, addr 0x5f9c604, size 0x60, virtual false, abstract: false, final false
inline float_t get_X() ;

/// @brief Method get_Y, addr 0x5f9c708, size 0x60, virtual false, abstract: false, final false
inline float_t get_Y() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::Vector2Compressed>"
constexpr ::System::IEquatable_1<::Fusion::Vector2Compressed>* i___System__IEquatable_1___Fusion__Vector2Compressed_() ;

/// @brief Method op_Equality, addr 0x5f9ca64, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::Vector2Compressed  left, ::Fusion::Vector2Compressed  right) ;

/// @brief Method op_Implicit, addr 0x5f9c80c, size 0xf4, virtual false, abstract: false, final false
static inline ::Fusion::Vector2Compressed op_Implicit___Fusion__Vector2Compressed(::UnityEngine::Vector2  v) ;

/// @brief Method op_Implicit, addr 0x5f9c900, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::Fusion::Vector2Compressed  q) ;

/// @brief Method op_Inequality, addr 0x5f9ca70, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::Vector2Compressed  left, ::Fusion::Vector2Compressed  right) ;

/// @brief Method set_X, addr 0x5f9c664, size 0xa4, virtual false, abstract: false, final false
inline void set_X(float_t  value) ;

/// @brief Method set_Y, addr 0x5f9c768, size 0xa4, virtual false, abstract: false, final false
inline void set_Y(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Vector2Compressed() ;

// Ctor Parameters [CppParam { name: "xEncoded", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "yEncoded", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Vector2Compressed(int32_t  xEncoded, int32_t  yEncoded) noexcept;

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
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19014};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Vector2Compressed) == 0x8, "Size mismatch!");

} // namespace end def Fusion
