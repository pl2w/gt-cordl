#pragma once
// IWYU pragma private; include "Fusion/Internal/IUnityValueSurrogate_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUnityValueSurrogate_1)
namespace Fusion::Internal {
class IUnitySurrogate;
}
// Forward declare root types
namespace Fusion::Internal {
template<typename T>
class IUnityValueSurrogate_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::Internal::IUnityValueSurrogate_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::Internal::IUnityValueSurrogate_1, "Fusion.Internal", "IUnityValueSurrogate`1");
// Dependencies 
namespace Fusion::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.Internal.IUnityValueSurrogate`1<T>
class CORDL_TYPE IUnityValueSurrogate_1 {
public:
// Declarations
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) T  DataProperty;

/// @brief Convert operator to "::Fusion::Internal::IUnitySurrogate"
constexpr operator  ::Fusion::Internal::IUnitySurrogate*() noexcept;

/// @brief Method get_DataProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T get_DataProperty() ;

/// @brief Convert to "::Fusion::Internal::IUnitySurrogate"
constexpr ::Fusion::Internal::IUnitySurrogate* i___Fusion__Internal__IUnitySurrogate() noexcept;

/// @brief Method set_DataProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_DataProperty(T  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IUnityValueSurrogate_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUnityValueSurrogate_1(IUnityValueSurrogate_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19385};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Internal
