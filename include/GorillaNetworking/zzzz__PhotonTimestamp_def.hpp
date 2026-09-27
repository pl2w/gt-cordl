#pragma once
// IWYU pragma private; include "GorillaNetworking/PhotonTimestamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonTimestamp)
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GorillaNetworking {
struct PhotonTimestamp;
}
// Write type traits
MARK_VAL_T(::GorillaNetworking::PhotonTimestamp);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PhotonTimestamp, "GorillaNetworking", "PhotonTimestamp");
// [IsReadOnly]
// Dependencies 
namespace GorillaNetworking {
// Is value type: true
// CS Name: GorillaNetworking.PhotonTimestamp
struct CORDL_TYPE PhotonTimestamp {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::GorillaNetworking::PhotonTimestamp>"
constexpr operator  ::System::IComparable_1<::GorillaNetworking::PhotonTimestamp>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GorillaNetworking::PhotonTimestamp>"
constexpr operator  ::System::IEquatable_1<::GorillaNetworking::PhotonTimestamp>*() ;

/// @brief Method AddSeconds, addr 0x5c96130, size 0x38, virtual false, abstract: false, final false
inline ::GorillaNetworking::PhotonTimestamp AddSeconds(double_t  seconds) ;

/// @brief Method CompareTo, addr 0x5c96348, size 0x50, virtual true, abstract: false, final true
inline int32_t CompareTo(::GorillaNetworking::PhotonTimestamp  other) ;

/// @brief Method Delta, addr 0x5c96068, size 0x40, virtual false, abstract: false, final false
static inline double_t Delta(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b) ;

/// @brief Method Equals, addr 0x5c963a8, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5c96398, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::GorillaNetworking::PhotonTimestamp  other) ;

/// @brief Method GetHashCode, addr 0x5c96420, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Normalize, addr 0x5c95fc0, size 0x30, virtual false, abstract: false, final false
static inline double_t Normalize(double_t  v) ;

/// @brief Method SecondsSince, addr 0x5c960ec, size 0x44, virtual false, abstract: false, final false
inline double_t SecondsSince(::GorillaNetworking::PhotonTimestamp  other) ;

/// @brief Method SecondsUntil, addr 0x5c960a8, size 0x44, virtual false, abstract: false, final false
inline double_t SecondsUntil(::GorillaNetworking::PhotonTimestamp  other) ;

/// @brief Method ToString, addr 0x5c96440, size 0x4c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5c95f88, size 0x38, virtual false, abstract: false, final false
inline void _ctor(double_t  raw) ;

/// @brief Method get_Now, addr 0x5c95ff0, size 0x78, virtual false, abstract: false, final false
static inline ::GorillaNetworking::PhotonTimestamp get_Now() ;

/// @brief Convert to "::System::IComparable_1<::GorillaNetworking::PhotonTimestamp>"
constexpr ::System::IComparable_1<::GorillaNetworking::PhotonTimestamp>* i___System__IComparable_1___GorillaNetworking__PhotonTimestamp_() ;

/// @brief Convert to "::System::IEquatable_1<::GorillaNetworking::PhotonTimestamp>"
constexpr ::System::IEquatable_1<::GorillaNetworking::PhotonTimestamp>* i___System__IEquatable_1___GorillaNetworking__PhotonTimestamp_() ;

/// @brief Method op_Addition, addr 0x5c96168, size 0x34, virtual false, abstract: false, final false
static inline ::GorillaNetworking::PhotonTimestamp op_Addition(::GorillaNetworking::PhotonTimestamp  t, double_t  seconds) ;

/// @brief Method op_Equality, addr 0x5c96330, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b) ;

/// @brief Method op_GreaterThan, addr 0x5c96258, size 0x48, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x5c962e8, size 0x48, virtual false, abstract: false, final false
static inline bool op_GreaterThanOrEqual(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b) ;

/// @brief Method op_Inequality, addr 0x5c9633c, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b) ;

/// @brief Method op_LessThan, addr 0x5c96210, size 0x48, virtual false, abstract: false, final false
static inline bool op_LessThan(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b) ;

/// @brief Method op_LessThanOrEqual, addr 0x5c962a0, size 0x48, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b) ;

/// @brief Method op_Subtraction, addr 0x5c9619c, size 0x34, virtual false, abstract: false, final false
static inline ::GorillaNetworking::PhotonTimestamp op_Subtraction(::GorillaNetworking::PhotonTimestamp  t, double_t  seconds) ;

/// @brief Method op_Subtraction, addr 0x5c961d0, size 0x40, virtual false, abstract: false, final false
static inline double_t op_Subtraction(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr PhotonTimestamp() ;

// Ctor Parameters [CppParam { name: "Value", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr PhotonTimestamp(double_t  Value) noexcept;

/// @brief Field HalfWrapPeriod offset 0xffffffff size 0x8
static constexpr double_t  HalfWrapPeriod{static_cast<double_t>(2147483.648)};

/// @brief Field WrapPeriod offset 0xffffffff size 0x8
static constexpr double_t  WrapPeriod{static_cast<double_t>(4294967.296)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4374};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Value, offset: 0x0, size: 0x8, def value: None
 double_t  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PhotonTimestamp, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PhotonTimestamp) == 0x8, "Size mismatch!");

} // namespace end def GorillaNetworking
