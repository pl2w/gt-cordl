#pragma once
// IWYU pragma private; include "GlobalNamespace/ICallbackUnique.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICallbackUnique)
namespace GlobalNamespace {
class ICallBack;
}
// Forward declare root types
namespace GlobalNamespace {
class ICallbackUnique;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ICallbackUnique*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ICallbackUnique*, "", "ICallbackUnique");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ICallbackUnique
class CORDL_TYPE ICallbackUnique {
public:
// Declarations
 __declspec(property(get=get_Registered, put=set_Registered)) bool  Registered;

/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr operator  ::GlobalNamespace::ICallBack*() noexcept;

/// @brief Method get_Registered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_Registered() ;

/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* i___GlobalNamespace__ICallBack() noexcept;

/// @brief Method set_Registered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Registered(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ICallbackUnique", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICallbackUnique(ICallbackUnique const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3477};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
