#pragma once
// IWYU pragma private; include "GlobalNamespace/StringEnum_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringEnum_1)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TEnum>
struct StringEnum_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::StringEnum_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::StringEnum_1, "", "StringEnum`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TEnum>
// Is value type: true
// CS Name: StringEnum`1<TEnum>
struct CORDL_TYPE StringEnum_1 {
public:
// Declarations
 __declspec(property(get=get_Value)) TEnum  Value;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEnum get_Value() ;

/// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::StringEnum_1<TEnum>  left, ::GlobalNamespace::StringEnum_1<TEnum>  right) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline TEnum op_Implicit_TEnum(::GlobalNamespace::StringEnum_1<TEnum>  se) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::StringEnum_1<TEnum> op_Implicit___GlobalNamespace__StringEnum_1_TEnum_(TEnum  e) ;

/// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::StringEnum_1<TEnum>  left, ::GlobalNamespace::StringEnum_1<TEnum>  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr StringEnum_1() ;

// Ctor Parameters [CppParam { name: "m_EnumValue", ty: "TEnum", modifiers: "", def_value: None, comment: None }]
constexpr StringEnum_1(TEnum  m_EnumValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2841};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [SerializeField]
/// @brief Field m_EnumValue, offset: 0x0, size: 0x8, def value: None
 TEnum  m_EnumValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
