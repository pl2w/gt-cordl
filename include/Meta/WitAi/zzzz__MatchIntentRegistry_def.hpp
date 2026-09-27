#pragma once
// IWYU pragma private; include "Meta/WitAi/MatchIntentRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MatchIntentRegistry)
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::WitAi::Utilities {
template<typename T,typename U>
class DictionaryList_2;
}
namespace Meta::WitAi {
class RegisteredMatchIntent;
}
// Forward declare root types
namespace Meta::WitAi {
class MatchIntentRegistry;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::MatchIntentRegistry*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::MatchIntentRegistry*, "Meta.WitAi", "MatchIntentRegistry");
// [LogCategory("MatchIntent")]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.MatchIntentRegistry
class CORDL_TYPE MatchIntentRegistry : public ::System::Object {
public:
// Declarations
/// @brief Field <Logger>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Logger_k__BackingField, put=setStaticF__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field registeredMethods, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_registeredMethods, put=setStaticF_registeredMethods)) ::Meta::WitAi::Utilities::DictionaryList_2<::StringW,::Meta::WitAi::RegisteredMatchIntent*>*  registeredMethods;

/// @brief Method Initialize, addr 0x9e74574, size 0x180, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method RefreshAssemblies, addr 0x9e746f4, size 0xbf4, virtual false, abstract: false, final false
static inline void RefreshAssemblies() ;

static inline ::Meta::Voice::Logging::IVLogger* getStaticF__Logger_k__BackingField() ;

static inline ::Meta::WitAi::Utilities::DictionaryList_2<::StringW,::Meta::WitAi::RegisteredMatchIntent*>* getStaticF_registeredMethods() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e74494, size 0x58, virtual false, abstract: false, final false
static inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// @brief Method get_RegisteredMethods, addr 0x9e744ec, size 0x88, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Utilities::DictionaryList_2<::StringW,::Meta::WitAi::RegisteredMatchIntent*>* get_RegisteredMethods() ;

static inline void setStaticF__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

static inline void setStaticF_registeredMethods(::Meta::WitAi::Utilities::DictionaryList_2<::StringW,::Meta::WitAi::RegisteredMatchIntent*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchIntentRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchIntentRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchIntentRegistry(MatchIntentRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchIntentRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchIntentRegistry(MatchIntentRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25540};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::MatchIntentRegistry) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
