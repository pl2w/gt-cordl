#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Extension/RealtimeExtensions_DictionaryProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RealtimeExtensions_DictionaryProperties)
namespace Fusion {
class SessionProperty;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Fusion::Photon::Realtime::Extension {
class RealtimeExtensions_DictionaryProperties;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::Extension::RealtimeExtensions_DictionaryProperties*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Extension::RealtimeExtensions_DictionaryProperties*, "Fusion.Photon.Realtime.Extension", "RealtimeExtensions_DictionaryProperties");
// Dependencies System.Object
namespace Fusion::Photon::Realtime::Extension {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Extension.RealtimeExtensions_DictionaryProperties
class CORDL_TYPE RealtimeExtensions_DictionaryProperties : public ::System::Object {
public:
// Declarations
/// @brief Method CalculateTotalSize, addr 0x5f690b4, size 0x58, virtual false, abstract: false, final false
static inline int32_t CalculateTotalSize(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  dictionary) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RealtimeExtensions_DictionaryProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RealtimeExtensions_DictionaryProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RealtimeExtensions_DictionaryProperties(RealtimeExtensions_DictionaryProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RealtimeExtensions_DictionaryProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RealtimeExtensions_DictionaryProperties(RealtimeExtensions_DictionaryProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28117};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Photon::Realtime::Extension::RealtimeExtensions_DictionaryProperties) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Extension
