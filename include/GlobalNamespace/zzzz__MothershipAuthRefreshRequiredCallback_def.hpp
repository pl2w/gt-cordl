#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipAuthRefreshRequiredCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AuthRefreshRequiredDelegateWrapper_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipAuthRefreshRequiredCallback)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipAuthRefreshRequiredCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipAuthRefreshRequiredCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipAuthRefreshRequiredCallback*, "", "MothershipAuthRefreshRequiredCallback");
// Dependencies AuthRefreshRequiredDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipAuthRefreshRequiredCallback
class CORDL_TYPE MothershipAuthRefreshRequiredCallback : public ::GlobalNamespace::AuthRefreshRequiredDelegateWrapper {
public:
// Declarations
/// @brief Field _authRefreshFunction, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__authRefreshFunction, put=__cordl_internal_set__authRefreshFunction)) ::System::Action_1<::StringW>*  _authRefreshFunction;

/// @brief Method AuthRefreshRequired, addr 0x53b90bc, size 0x1c, virtual true, abstract: false, final false
inline void AuthRefreshRequired(::StringW  arg0) ;

static inline ::GlobalNamespace::MothershipAuthRefreshRequiredCallback* New_ctor(::System::Action_1<::StringW>*  authRefreshFunction) ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get__authRefreshFunction() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get__authRefreshFunction() ;

constexpr void __cordl_internal_set__authRefreshFunction(::System::Action_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x53b9044, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::StringW>*  authRefreshFunction) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipAuthRefreshRequiredCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipAuthRefreshRequiredCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipAuthRefreshRequiredCallback(MothershipAuthRefreshRequiredCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipAuthRefreshRequiredCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipAuthRefreshRequiredCallback(MothershipAuthRefreshRequiredCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9747};

/// @brief Field _authRefreshFunction, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ____authRefreshFunction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipAuthRefreshRequiredCallback, ____authRefreshFunction) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipAuthRefreshRequiredCallback) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
