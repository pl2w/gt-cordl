#pragma once
// IWYU pragma private; include "Fusion/Angle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Angle)
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
// Forward declare root types
namespace Fusion {
struct Angle;
}
// Write type traits
MARK_VAL_T(::Fusion::Angle);
DEFINE_IL2CPP_CLASS(::Fusion::Angle, "Fusion", "Angle");
// [NetworkStructWeaved(1)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.Angle
struct CORDL_TYPE Angle {
public:
// Declarations
/// @brief Field _value, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) int32_t  _value;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::Angle>"
constexpr operator  ::System::IEquatable_1<::Fusion::Angle>*() ;

/// @brief Method Clamp, addr 0x5f95ebc, size 0x20, virtual false, abstract: false, final false
static inline ::Fusion::Angle Clamp(::Fusion::Angle  value, ::Fusion::Angle  min, ::Fusion::Angle  max) ;

/// @brief Method Clamp, addr 0x5f95c94, size 0x54, virtual false, abstract: false, final false
inline void Clamp(::Fusion::Angle  min, ::Fusion::Angle  max) ;

/// @brief Method Equals, addr 0x5f95f34, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5f95f24, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Fusion::Angle  other) ;

/// @brief Method GetHashCode, addr 0x5f95fac, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Lerp, addr 0x5f95d00, size 0x114, virtual false, abstract: false, final false
static inline ::Fusion::Angle Lerp(::Fusion::Angle  a, ::Fusion::Angle  b, float_t  t) ;

/// @brief Method Max, addr 0x5f95cf4, size 0xc, virtual false, abstract: false, final false
static inline ::Fusion::Angle Max(::Fusion::Angle  a, ::Fusion::Angle  b) ;

/// @brief Method Min, addr 0x5f95ce8, size 0xc, virtual false, abstract: false, final false
static inline ::Fusion::Angle Min(::Fusion::Angle  a, ::Fusion::Angle  b) ;

/// @brief Method ToString, addr 0x5f96198, size 0x108, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__value() const;

constexpr int32_t& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set__value(int32_t  value) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::Angle>"
constexpr ::System::IEquatable_1<::Fusion::Angle>* i___System__IEquatable_1___Fusion__Angle_() ;

/// @brief Method op_Addition, addr 0x5f95fb4, size 0x78, virtual false, abstract: false, final false
static inline ::Fusion::Angle op_Addition(::Fusion::Angle  a, ::Fusion::Angle  b) ;

/// @brief Method op_Equality, addr 0x5f95f0c, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::Angle  a, ::Fusion::Angle  b) ;

/// @brief Method op_Explicit, addr 0x5f9609c, size 0x14, virtual false, abstract: false, final false
static inline double_t op_Explicit_double_t(::Fusion::Angle  value) ;

/// @brief Method op_Explicit, addr 0x5f95e14, size 0x18, virtual false, abstract: false, final false
static inline float_t op_Explicit_float_t(::Fusion::Angle  value) ;

/// @brief Method op_GreaterThan, addr 0x5f95ef4, size 0xc, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::Fusion::Angle  a, ::Fusion::Angle  b) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x5f95f00, size 0xc, virtual false, abstract: false, final false
static inline bool op_GreaterThanOrEqual(::Fusion::Angle  a, ::Fusion::Angle  b) ;

/// @brief Method op_Implicit, addr 0x5f960b0, size 0x7c, virtual false, abstract: false, final false
static inline ::Fusion::Angle op_Implicit___Fusion__Angle(double_t  value) ;

/// @brief Method op_Implicit, addr 0x5f95e2c, size 0x90, virtual false, abstract: false, final false
static inline ::Fusion::Angle op_Implicit___Fusion__Angle(float_t  value) ;

/// @brief Method op_Implicit, addr 0x5f9612c, size 0x6c, virtual false, abstract: false, final false
static inline ::Fusion::Angle op_Implicit___Fusion__Angle(int32_t  value) ;

/// @brief Method op_Inequality, addr 0x5f95f18, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::Angle  a, ::Fusion::Angle  b) ;

/// @brief Method op_LessThan, addr 0x5f95edc, size 0xc, virtual false, abstract: false, final false
static inline bool op_LessThan(::Fusion::Angle  a, ::Fusion::Angle  b) ;

/// @brief Method op_LessThanOrEqual, addr 0x5f95ee8, size 0xc, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::Fusion::Angle  a, ::Fusion::Angle  b) ;

/// @brief Method op_Subtraction, addr 0x5f9602c, size 0x70, virtual false, abstract: false, final false
static inline ::Fusion::Angle op_Subtraction(::Fusion::Angle  a, ::Fusion::Angle  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr Angle() ;

// Ctor Parameters [CppParam { name: "_value", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Angle(int32_t  _value) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____value_padding[0x0];
/// @brief Field _value, offset: 0x0, size: 0x4, def value: None
 int32_t  ____value;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____value_padding_forAlignment[0x0];
/// @brief Field _value, offset: 0x0, size: 0x4, def value: None
 int32_t  ____value_forAlignment;
};
};
public:

/// @brief Field ACCURACY offset 0xffffffff size 0x4
static constexpr int32_t  ACCURACY{static_cast<int32_t>(0x2710)};

/// @brief Field DECIMALS offset 0xffffffff size 0x4
static constexpr int32_t  DECIMALS{static_cast<int32_t>(0x4)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x4)};

/// @brief Field _360 offset 0xffffffff size 0x4
static constexpr int32_t  _360{static_cast<int32_t>(0x36ee80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18968};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Angle) == 0x4, "Size mismatch!");

} // namespace end def Fusion
