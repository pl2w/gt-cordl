#pragma once
// IWYU pragma private; include "PlayFab/ISerializerPlugin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ISerializerPlugin)
namespace PlayFab {
class IPlayFabPlugin;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab {
class ISerializerPlugin;
}
// Write type traits
MARK_REF_T(::PlayFab::ISerializerPlugin*);
DEFINE_IL2CPP_CLASS(::PlayFab::ISerializerPlugin*, "PlayFab", "ISerializerPlugin");
// Dependencies 
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.ISerializerPlugin
class CORDL_TYPE ISerializerPlugin {
public:
// Declarations
/// @brief Convert operator to "::PlayFab::IPlayFabPlugin"
constexpr operator  ::PlayFab::IPlayFabPlugin*() noexcept;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* DeserializeObject(::StringW  serialized) ;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename T>
inline T DeserializeObject(::StringW  serialized) ;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename T>
inline T DeserializeObject(::StringW  serialized, ::System::Object*  serializerStrategy) ;

/// @brief Method SerializeObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW SerializeObject(::System::Object*  obj) ;

/// @brief Method SerializeObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW SerializeObject(::System::Object*  obj, ::System::Object*  serializerStrategy) ;

/// @brief Convert to "::PlayFab::IPlayFabPlugin"
constexpr ::PlayFab::IPlayFabPlugin* i___PlayFab__IPlayFabPlugin() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ISerializerPlugin", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISerializerPlugin(ISerializerPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19515};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayFab
