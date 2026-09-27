#pragma once
// IWYU pragma private; include "GlobalNamespace/IVariable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVariable_1)
namespace GlobalNamespace {
class IVariable;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class IVariable_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::IVariable_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::IVariable_1, "", "IVariable`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: IVariable`1<T>
class CORDL_TYPE IVariable_1 {
public:
// Declarations
 __declspec(property(get=IVariable_get_ValueType)) ::System::Type*  IVariable_ValueType;

 __declspec(property(get=get_Value, put=set_Value)) T  Value;

/// @brief Convert operator to "::GlobalNamespace::IVariable"
constexpr operator  ::GlobalNamespace::IVariable*() noexcept;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T Get() ;

/// @brief Method IVariable.get_ValueType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Type* IVariable_get_ValueType() ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Set(T  value) ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T get_Value() ;

/// @brief Convert to "::GlobalNamespace::IVariable"
constexpr ::GlobalNamespace::IVariable* i___GlobalNamespace__IVariable() noexcept;

/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Value(T  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IVariable_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVariable_1(IVariable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2321};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
