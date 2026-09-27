#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipLogCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipLogDelegateWrapper_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipLogCallback)
namespace GlobalNamespace {
struct MothershipLogLevel;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipLogCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipLogCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipLogCallback*, "", "MothershipLogCallback");
// Dependencies MothershipLogDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipLogCallback
class CORDL_TYPE MothershipLogCallback : public ::GlobalNamespace::MothershipLogDelegateWrapper {
public:
// Declarations
/// @brief Field _logFunction, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__logFunction, put=__cordl_internal_set__logFunction)) ::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*  _logFunction;

static inline ::GlobalNamespace::MothershipLogCallback* New_ctor(::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*  logFunction) ;

/// @brief Method OnLogCallback, addr 0x53c0c90, size 0x1c, virtual true, abstract: false, final false
inline void OnLogCallback(::GlobalNamespace::MothershipLogLevel  level, ::StringW  message) ;

constexpr ::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>* const& __cordl_internal_get__logFunction() const;

constexpr ::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*& __cordl_internal_get__logFunction() ;

constexpr void __cordl_internal_set__logFunction(::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x53c0c18, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*  logFunction) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipLogCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipLogCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipLogCallback(MothershipLogCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipLogCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipLogCallback(MothershipLogCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9770};

/// @brief Field _logFunction, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*  ____logFunction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipLogCallback, ____logFunction) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipLogCallback) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
