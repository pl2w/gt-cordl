#pragma once
// IWYU pragma private; include "Unity/Mathematics/float2x2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float2x2)
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
namespace Unity::Mathematics {
struct float2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float2x2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float2x2, "Unity.Mathematics", "float2x2");
// [DefaultMember("Item")]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.float2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float2x2
struct CORDL_TYPE float2x2 {
public:
// Declarations
/// @brief Field identity, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::float2x2  identity;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float2x2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float2x2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb05e5d0, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb05e594, size 0x3c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method GetHashCode, addr 0xb05e678, size 0x58, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb05e6d0, size 0x1d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb05e8a0, size 0x1c4, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb05e57c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1) ;

/// @brief Method .ctor, addr 0xb05e588, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m10, float_t  m11) ;

static inline ::Unity::Mathematics::float2x2 getStaticF_identity() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float2x2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float2x2>* i___System__IEquatable_1___Unity__Mathematics__float2x2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

static inline void setStaticF_identity(::Unity::Mathematics::float2x2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float2x2() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }]
constexpr float2x2(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31484};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field c0, offset: 0x0, size: 0x8, def value: None
 ::Unity::Mathematics::float2  c0;

/// @brief Field c1, offset: 0x8, size: 0x8, def value: None
 ::Unity::Mathematics::float2  c1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x2, c1) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float2x2) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics
