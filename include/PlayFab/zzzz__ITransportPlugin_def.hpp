#pragma once
// IWYU pragma private; include "PlayFab/ITransportPlugin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITransportPlugin)
namespace PlayFab {
class IPlayFabPlugin;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab {
class ITransportPlugin;
}
// Write type traits
MARK_REF_T(::PlayFab::ITransportPlugin*);
DEFINE_IL2CPP_CLASS(::PlayFab::ITransportPlugin*, "PlayFab", "ITransportPlugin");
// Dependencies 
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.ITransportPlugin
class CORDL_TYPE ITransportPlugin {
public:
// Declarations
 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

/// @brief Convert operator to "::PlayFab::IPlayFabPlugin"
constexpr operator  ::PlayFab::IPlayFabPlugin*() noexcept;

/// @brief Method GetPendingMessages, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetPendingMessages() ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Initialize() ;

/// @brief Method MakeApiCall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void MakeApiCall(::System::Object*  reqContainer) ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDestroy() ;

/// @brief Method SimpleGetCall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SimpleGetCall(::StringW  fullUrl, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method SimplePostCall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SimplePostCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method SimplePutCall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SimplePutCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Update() ;

/// @brief Method get_IsInitialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsInitialized() ;

/// @brief Convert to "::PlayFab::IPlayFabPlugin"
constexpr ::PlayFab::IPlayFabPlugin* i___PlayFab__IPlayFabPlugin() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ITransportPlugin", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITransportPlugin(ITransportPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19516};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayFab
