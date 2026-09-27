#pragma once
// IWYU pragma private; include "GlobalNamespace/DeepLinkSender.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeepLinkSender)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class DeepLinkSender;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeepLinkSender*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeepLinkSender*, "", "DeepLinkSender");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeepLinkSender
class CORDL_TYPE DeepLinkSender : public ::System::Object {
public:
// Declarations
/// @brief Field currentDeepLinkSentCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_currentDeepLinkSentCallback, put=setStaticF_currentDeepLinkSentCallback)) ::System::Action_1<::StringW>*  currentDeepLinkSentCallback;

/// @brief Method SendDeepLink, addr 0x579a918, size 0x70, virtual false, abstract: false, final false
static inline bool SendDeepLink(uint64_t  deepLinkAppID, ::StringW  deepLinkMessage, ::System::Action_1<::StringW>*  onSent) ;

static inline ::System::Action_1<::StringW>* getStaticF_currentDeepLinkSentCallback() ;

static inline void setStaticF_currentDeepLinkSentCallback(::System::Action_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeepLinkSender() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeepLinkSender", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeepLinkSender(DeepLinkSender && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeepLinkSender", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeepLinkSender(DeepLinkSender const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1477};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DeepLinkSender) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
