#pragma once
// IWYU pragma private; include "Unity/IntegerTime/RationalTime_TicksPerSecond.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RationalTime_TicksPerSecond)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct RationalTime_TicksPerSecond;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RationalTime_TicksPerSecond);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RationalTime_TicksPerSecond, "Unity.IntegerTime", "RationalTime/TicksPerSecond");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.IntegerTime.RationalTime/TicksPerSecond
struct CORDL_TYPE RationalTime_TicksPerSecond {
public:
// Declarations
/// @brief Field DefaultTicksPerSecond, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DefaultTicksPerSecond, put=setStaticF_DefaultTicksPerSecond)) ::GlobalNamespace::RationalTime_TicksPerSecond  DefaultTicksPerSecond;

/// @brief Field DiscreteTimeRate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DiscreteTimeRate, put=setStaticF_DiscreteTimeRate)) ::GlobalNamespace::RationalTime_TicksPerSecond  DiscreteTimeRate;

/// @brief Field TicksPerSecond11988, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TicksPerSecond11988, put=setStaticF_TicksPerSecond11988)) ::GlobalNamespace::RationalTime_TicksPerSecond  TicksPerSecond11988;

/// @brief Field TicksPerSecond120, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TicksPerSecond120, put=setStaticF_TicksPerSecond120)) ::GlobalNamespace::RationalTime_TicksPerSecond  TicksPerSecond120;

/// @brief Field TicksPerSecond2397, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TicksPerSecond2397, put=setStaticF_TicksPerSecond2397)) ::GlobalNamespace::RationalTime_TicksPerSecond  TicksPerSecond2397;

/// @brief Field TicksPerSecond24, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TicksPerSecond24, put=setStaticF_TicksPerSecond24)) ::GlobalNamespace::RationalTime_TicksPerSecond  TicksPerSecond24;

/// @brief Field TicksPerSecond2425, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TicksPerSecond2425, put=setStaticF_TicksPerSecond2425)) ::GlobalNamespace::RationalTime_TicksPerSecond  TicksPerSecond2425;

/// @brief Field TicksPerSecond25, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TicksPerSecond25, put=setStaticF_TicksPerSecond25)) ::GlobalNamespace::RationalTime_TicksPerSecond  TicksPerSecond25;

/// @brief Field TicksPerSecond2997, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TicksPerSecond2997, put=setStaticF_TicksPerSecond2997)) ::GlobalNamespace::RationalTime_TicksPerSecond  TicksPerSecond2997;

/// @brief Field TicksPerSecond30, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TicksPerSecond30, put=setStaticF_TicksPerSecond30)) ::GlobalNamespace::RationalTime_TicksPerSecond  TicksPerSecond30;

/// @brief Field TicksPerSecond50, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TicksPerSecond50, put=setStaticF_TicksPerSecond50)) ::GlobalNamespace::RationalTime_TicksPerSecond  TicksPerSecond50;

/// @brief Field TicksPerSecond5994, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TicksPerSecond5994, put=setStaticF_TicksPerSecond5994)) ::GlobalNamespace::RationalTime_TicksPerSecond  TicksPerSecond5994;

/// @brief Field TicksPerSecond60, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TicksPerSecond60, put=setStaticF_TicksPerSecond60)) ::GlobalNamespace::RationalTime_TicksPerSecond  TicksPerSecond60;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::RationalTime_TicksPerSecond>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::RationalTime_TicksPerSecond>*() ;

/// [IsReadOnly]
/// @brief Method Equals, addr 0xb55c900, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::RationalTime_TicksPerSecond  rhs) ;

/// [IsReadOnly]
/// @brief Method Equals, addr 0xb55c928, size 0x9c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  rhs) ;

/// @brief Method Gcd, addr 0xb55ca38, size 0x30, virtual false, abstract: false, final false
static inline uint32_t Gcd(uint32_t  a, uint32_t  b) ;

/// [IsReadOnly]
/// @brief Method GetHashCode, addr 0xb55c9c4, size 0x74, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Simplify, addr 0xb55c858, size 0xa8, virtual false, abstract: false, final false
static inline void Simplify(::by_ref<uint32_t>  num, ::by_ref<uint32_t>  den) ;

/// @brief Method .ctor, addr 0xb55c7e4, size 0x74, virtual false, abstract: false, final false
inline void _ctor(uint32_t  num, uint32_t  den) ;

static inline ::GlobalNamespace::RationalTime_TicksPerSecond getStaticF_DefaultTicksPerSecond() ;

static inline ::GlobalNamespace::RationalTime_TicksPerSecond getStaticF_DiscreteTimeRate() ;

static inline ::GlobalNamespace::RationalTime_TicksPerSecond getStaticF_TicksPerSecond11988() ;

static inline ::GlobalNamespace::RationalTime_TicksPerSecond getStaticF_TicksPerSecond120() ;

static inline ::GlobalNamespace::RationalTime_TicksPerSecond getStaticF_TicksPerSecond2397() ;

static inline ::GlobalNamespace::RationalTime_TicksPerSecond getStaticF_TicksPerSecond24() ;

static inline ::GlobalNamespace::RationalTime_TicksPerSecond getStaticF_TicksPerSecond2425() ;

static inline ::GlobalNamespace::RationalTime_TicksPerSecond getStaticF_TicksPerSecond25() ;

static inline ::GlobalNamespace::RationalTime_TicksPerSecond getStaticF_TicksPerSecond2997() ;

static inline ::GlobalNamespace::RationalTime_TicksPerSecond getStaticF_TicksPerSecond30() ;

static inline ::GlobalNamespace::RationalTime_TicksPerSecond getStaticF_TicksPerSecond50() ;

static inline ::GlobalNamespace::RationalTime_TicksPerSecond getStaticF_TicksPerSecond5994() ;

static inline ::GlobalNamespace::RationalTime_TicksPerSecond getStaticF_TicksPerSecond60() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::RationalTime_TicksPerSecond>"
constexpr ::System::IEquatable_1<::GlobalNamespace::RationalTime_TicksPerSecond>* i___System__IEquatable_1___GlobalNamespace__RationalTime_TicksPerSecond_() ;

static inline void setStaticF_DefaultTicksPerSecond(::GlobalNamespace::RationalTime_TicksPerSecond  value) ;

static inline void setStaticF_DiscreteTimeRate(::GlobalNamespace::RationalTime_TicksPerSecond  value) ;

static inline void setStaticF_TicksPerSecond11988(::GlobalNamespace::RationalTime_TicksPerSecond  value) ;

static inline void setStaticF_TicksPerSecond120(::GlobalNamespace::RationalTime_TicksPerSecond  value) ;

static inline void setStaticF_TicksPerSecond2397(::GlobalNamespace::RationalTime_TicksPerSecond  value) ;

static inline void setStaticF_TicksPerSecond24(::GlobalNamespace::RationalTime_TicksPerSecond  value) ;

static inline void setStaticF_TicksPerSecond2425(::GlobalNamespace::RationalTime_TicksPerSecond  value) ;

static inline void setStaticF_TicksPerSecond25(::GlobalNamespace::RationalTime_TicksPerSecond  value) ;

static inline void setStaticF_TicksPerSecond2997(::GlobalNamespace::RationalTime_TicksPerSecond  value) ;

static inline void setStaticF_TicksPerSecond30(::GlobalNamespace::RationalTime_TicksPerSecond  value) ;

static inline void setStaticF_TicksPerSecond50(::GlobalNamespace::RationalTime_TicksPerSecond  value) ;

static inline void setStaticF_TicksPerSecond5994(::GlobalNamespace::RationalTime_TicksPerSecond  value) ;

static inline void setStaticF_TicksPerSecond60(::GlobalNamespace::RationalTime_TicksPerSecond  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RationalTime_TicksPerSecond() ;

// Ctor Parameters [CppParam { name: "m_Numerator", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Denominator", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr RationalTime_TicksPerSecond(uint32_t  m_Numerator, uint32_t  m_Denominator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14667};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [SerializeField]
/// @brief Field m_Numerator, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_Numerator;

/// [SerializeField]
/// @brief Field m_Denominator, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_Denominator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RationalTime_TicksPerSecond, m_Numerator) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RationalTime_TicksPerSecond, m_Denominator) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RationalTime_TicksPerSecond) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
