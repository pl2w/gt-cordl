#pragma once
// IWYU pragma private; include "GlobalNamespace/GTScene.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTScene)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GTScene;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTScene*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTScene*, "", "GTScene");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTScene
class CORDL_TYPE GTScene : public ::System::Object {
public:
// Declarations
/// @brief Field _alias, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__alias, put=__cordl_internal_set__alias)) ::StringW  _alias;

/// @brief Field _buildIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__buildIndex, put=__cordl_internal_set__buildIndex)) int32_t  _buildIndex;

/// @brief Field _guid, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__guid, put=__cordl_internal_set__guid)) ::StringW  _guid;

/// @brief Field _includeInBuild, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__includeInBuild, put=__cordl_internal_set__includeInBuild)) bool  _includeInBuild;

/// @brief Field _name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _path, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__path, put=__cordl_internal_set__path)) ::StringW  _path;

 __declspec(property(get=get_alias)) ::StringW  alias;

 __declspec(property(get=get_buildIndex)) int32_t  buildIndex;

 __declspec(property(get=get_guid)) ::StringW  guid;

 __declspec(property(get=get_hasAlias)) bool  hasAlias;

 __declspec(property(get=get_includeInBuild)) bool  includeInBuild;

 __declspec(property(get=get_isLoaded)) bool  isLoaded;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_path)) ::StringW  path;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::GTScene*>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::GTScene*>*() noexcept;

/// @brief Method Equals, addr 0x5b20b60, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5b20af4, size 0x6c, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::GTScene*  other) ;

/// @brief Method From, addr 0x5b20d14, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTScene* From(::System::Object*  editorBuildSettingsScene) ;

/// @brief Method FromAsset, addr 0x5b20d0c, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTScene* FromAsset(::System::Object*  sceneAsset) ;

/// @brief Method GetHashCode, addr 0x5b20a8c, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method LoadAsync, addr 0x5b20c1c, size 0x78, virtual false, abstract: false, final false
inline void LoadAsync() ;

static inline ::GlobalNamespace::GTScene* New_ctor(::StringW  name, ::StringW  path, ::StringW  guid, int32_t  buildIndex, bool  includeInBuild) ;

/// @brief Method ToString, addr 0x5b20aa8, size 0x4c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UnloadAsync, addr 0x5b20c94, size 0x78, virtual false, abstract: false, final false
inline void UnloadAsync() ;

constexpr ::StringW const& __cordl_internal_get__alias() const;

constexpr ::StringW& __cordl_internal_get__alias() ;

constexpr int32_t const& __cordl_internal_get__buildIndex() const;

constexpr int32_t& __cordl_internal_get__buildIndex() ;

constexpr ::StringW const& __cordl_internal_get__guid() const;

constexpr ::StringW& __cordl_internal_get__guid() ;

constexpr bool const& __cordl_internal_get__includeInBuild() const;

constexpr bool& __cordl_internal_get__includeInBuild() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::StringW const& __cordl_internal_get__path() const;

constexpr ::StringW& __cordl_internal_get__path() ;

constexpr void __cordl_internal_set__alias(::StringW  value) ;

constexpr void __cordl_internal_set__buildIndex(int32_t  value) ;

constexpr void __cordl_internal_set__guid(::StringW  value) ;

constexpr void __cordl_internal_set__includeInBuild(bool  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__path(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b20954, size 0x138, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  path, ::StringW  guid, int32_t  buildIndex, bool  includeInBuild) ;

/// @brief Method get_alias, addr 0x5b20884, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_alias() ;

/// @brief Method get_buildIndex, addr 0x5b208a4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_buildIndex() ;

/// @brief Method get_guid, addr 0x5b2089c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_guid() ;

/// @brief Method get_hasAlias, addr 0x5b20934, size 0x20, virtual false, abstract: false, final false
inline bool get_hasAlias() ;

/// @brief Method get_includeInBuild, addr 0x5b208ac, size 0x8, virtual false, abstract: false, final false
inline bool get_includeInBuild() ;

/// @brief Method get_isLoaded, addr 0x5b208b4, size 0x80, virtual false, abstract: false, final false
inline bool get_isLoaded() ;

/// @brief Method get_name, addr 0x5b2088c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_path, addr 0x5b20894, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_path() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::GTScene*>"
constexpr ::System::IEquatable_1<::GlobalNamespace::GTScene*>* i___System__IEquatable_1___GlobalNamespace__GTScene__() noexcept;

/// @brief Method op_Equality, addr 0x5b20bec, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::GTScene*  x, ::GlobalNamespace::GTScene*  y) ;

/// @brief Method op_Inequality, addr 0x5b20bfc, size 0x20, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::GTScene*  x, ::GlobalNamespace::GTScene*  y) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTScene() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTScene", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTScene(GTScene && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTScene", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTScene(GTScene const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3604};

/// [SerializeField]
/// @brief Field _alias, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____alias;

/// [SerializeField]
/// @brief Field _name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____name;

/// [SerializeField]
/// @brief Field _path, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____path;

/// [SerializeField]
/// @brief Field _guid, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____guid;

/// [SerializeField]
/// @brief Field _buildIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ____buildIndex;

/// [SerializeField]
/// @brief Field _includeInBuild, offset: 0x34, size: 0x1, def value: None
 bool  ____includeInBuild;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTScene, ____alias) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTScene, ____name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTScene, ____path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTScene, ____guid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTScene, ____buildIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTScene, ____includeInBuild) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTScene) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
