#pragma once
// IWYU pragma private; include "Fusion/QuaternionCompressed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuaternionCompressed)
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
struct Quaternion;
}
// Forward declare root types
namespace Fusion {
struct QuaternionCompressed;
}
// Write type traits
MARK_VAL_T(::Fusion::QuaternionCompressed);
DEFINE_IL2CPP_CLASS(::Fusion::QuaternionCompressed, "Fusion", "QuaternionCompressed");
// [NetworkStructWeaved(4)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.QuaternionCompressed
struct CORDL_TYPE QuaternionCompressed {
public:
// Declarations
 __declspec(property(get=get_W, put=set_W)) float_t  W;

 __declspec(property(get=get_X, put=set_X)) float_t  X;

 __declspec(property(get=get_Y, put=set_Y)) float_t  Y;

 __declspec(property(get=get_Z, put=set_Z)) float_t  Z;

/// @brief Field wEncoded, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_wEncoded, put=__cordl_internal_set_wEncoded)) int32_t  wEncoded;

/// @brief Field xEncoded, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_xEncoded, put=__cordl_internal_set_xEncoded)) int32_t  xEncoded;

/// @brief Field yEncoded, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_yEncoded, put=__cordl_internal_set_yEncoded)) int32_t  yEncoded;

/// @brief Field zEncoded, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_zEncoded, put=__cordl_internal_set_zEncoded)) int32_t  zEncoded;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::QuaternionCompressed>"
constexpr operator  ::System::IEquatable_1<::Fusion::QuaternionCompressed>*() ;

/// @brief Method Equals, addr 0x5f9e178, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5f9e134, size 0x44, virtual true, abstract: false, final true
inline bool Equals(::Fusion::QuaternionCompressed  other) ;

/// @brief Method GetHashCode, addr 0x5f9e220, size 0x28, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

constexpr int32_t const& __cordl_internal_get_wEncoded() const;

constexpr int32_t& __cordl_internal_get_wEncoded() ;

constexpr int32_t const& __cordl_internal_get_xEncoded() const;

constexpr int32_t& __cordl_internal_get_xEncoded() ;

constexpr int32_t const& __cordl_internal_get_yEncoded() const;

constexpr int32_t& __cordl_internal_get_yEncoded() ;

constexpr int32_t const& __cordl_internal_get_zEncoded() const;

constexpr int32_t& __cordl_internal_get_zEncoded() ;

constexpr void __cordl_internal_set_wEncoded(int32_t  value) ;

constexpr void __cordl_internal_set_xEncoded(int32_t  value) ;

constexpr void __cordl_internal_set_yEncoded(int32_t  value) ;

constexpr void __cordl_internal_set_zEncoded(int32_t  value) ;

/// @brief Method get_W, addr 0x5f9dd94, size 0x60, virtual false, abstract: false, final false
inline float_t get_W() ;

/// @brief Method get_X, addr 0x5f9da88, size 0x60, virtual false, abstract: false, final false
inline float_t get_X() ;

/// @brief Method get_Y, addr 0x5f9db8c, size 0x60, virtual false, abstract: false, final false
inline float_t get_Y() ;

/// @brief Method get_Z, addr 0x5f9dc90, size 0x60, virtual false, abstract: false, final false
inline float_t get_Z() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::QuaternionCompressed>"
constexpr ::System::IEquatable_1<::Fusion::QuaternionCompressed>* i___System__IEquatable_1___Fusion__QuaternionCompressed_() ;

/// @brief Method op_Equality, addr 0x5f9e248, size 0x28, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::QuaternionCompressed  left, ::Fusion::QuaternionCompressed  right) ;

/// @brief Method op_Implicit, addr 0x5f9de98, size 0x174, virtual false, abstract: false, final false
static inline ::Fusion::QuaternionCompressed op_Implicit___Fusion__QuaternionCompressed(::UnityEngine::Quaternion  v) ;

/// @brief Method op_Implicit, addr 0x5f9e00c, size 0x128, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion op_Implicit___UnityEngine__Quaternion(::Fusion::QuaternionCompressed  q) ;

/// @brief Method op_Inequality, addr 0x5f9e270, size 0x28, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::QuaternionCompressed  left, ::Fusion::QuaternionCompressed  right) ;

/// @brief Method set_W, addr 0x5f9ddf4, size 0xa4, virtual false, abstract: false, final false
inline void set_W(float_t  value) ;

/// @brief Method set_X, addr 0x5f9dae8, size 0xa4, virtual false, abstract: false, final false
inline void set_X(float_t  value) ;

/// @brief Method set_Y, addr 0x5f9dbec, size 0xa4, virtual false, abstract: false, final false
inline void set_Y(float_t  value) ;

/// @brief Method set_Z, addr 0x5f9dcf0, size 0xa4, virtual false, abstract: false, final false
inline void set_Z(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr QuaternionCompressed() ;

// Ctor Parameters [CppParam { name: "xEncoded", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "yEncoded", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "zEncoded", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "wEncoded", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr QuaternionCompressed(int32_t  xEncoded, int32_t  yEncoded, int32_t  zEncoded, int32_t  wEncoded) noexcept;

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
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___wEncoded_padding[0xc];
/// @brief Field wEncoded, offset: 0xc, size: 0x4, def value: None
 int32_t  ___wEncoded;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___wEncoded_padding_forAlignment[0xc];
/// @brief Field wEncoded, offset: 0xc, size: 0x4, def value: None
 int32_t  ___wEncoded_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19017};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::QuaternionCompressed) == 0x10, "Size mismatch!");

} // namespace end def Fusion
