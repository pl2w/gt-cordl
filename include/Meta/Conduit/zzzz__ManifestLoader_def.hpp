#pragma once
// IWYU pragma private; include "Meta/Conduit/ManifestLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ManifestLoader)
namespace GlobalNamespace {
struct ManifestLoader__LoadManifestAsync_d__5;
}
namespace GlobalNamespace {
struct ManifestLoader__LoadManifestFromJsonAsync_d__6;
}
namespace Meta::Conduit {
class IManifestLoader;
}
namespace Meta::Conduit {
class ManifestLoader___c__DisplayClass6_0;
}
namespace Meta::Conduit {
class Manifest;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Meta::Conduit {
class ManifestLoader;
}
namespace Meta::Conduit {
class ManifestLoader___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::ManifestLoader*);
MARK_REF_T(::Meta::Conduit::ManifestLoader___c__DisplayClass6_0*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::ManifestLoader*, "Meta.Conduit", "ManifestLoader");
DEFINE_IL2CPP_CLASS(::Meta::Conduit::ManifestLoader___c__DisplayClass6_0*, "Meta.Conduit", "ManifestLoader/<>c__DisplayClass6_0");
// [LogCategory((Meta.Voice.Logging.LogCategory)1)]
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.ManifestLoader
class CORDL_TYPE ManifestLoader : public ::System::Object {
public:
// Declarations
using _LoadManifestAsync_d__5 = ::GlobalNamespace::ManifestLoader__LoadManifestAsync_d__5;

using _LoadManifestFromJsonAsync_d__6 = ::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6;

using __c__DisplayClass6_0 = ::Meta::Conduit::ManifestLoader___c__DisplayClass6_0;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

/// @brief Field <Logger>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Convert operator to "::Meta::Conduit::IManifestLoader"
constexpr operator  ::Meta::Conduit::IManifestLoader*() noexcept;

/// [AsyncStateMachine(typeof(Meta.Conduit.ManifestLoader::<LoadManifestAsync>d__5))]
/// @brief Method LoadManifestAsync, addr 0x9e221bc, size 0x120, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Meta::Conduit::Manifest*>* LoadManifestAsync(::StringW  manifestLocalPath) ;

/// [AsyncStateMachine(typeof(Meta.Conduit.ManifestLoader::<LoadManifestFromJsonAsync>d__6))]
/// @brief Method LoadManifestFromJsonAsync, addr 0x9e222dc, size 0x120, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Meta::Conduit::Manifest*>* LoadManifestFromJsonAsync(::StringW  manifestText) ;

static inline ::Meta::Conduit::ManifestLoader* New_ctor() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

/// @brief Method .ctor, addr 0x9e1e964, size 0x120, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e221b4, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// @brief Convert to "::Meta::Conduit::IManifestLoader"
constexpr ::Meta::Conduit::IManifestLoader* i___Meta__Conduit__IManifestLoader() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManifestLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManifestLoader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManifestLoader(ManifestLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManifestLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManifestLoader(ManifestLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25423};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::ManifestLoader, ____Logger_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::ManifestLoader) == 0x18, "Size mismatch!");

} // namespace end def Meta::Conduit
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.ManifestLoader/<>c__DisplayClass6_0
class CORDL_TYPE ManifestLoader___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Conduit::ManifestLoader*  __4__this;

/// @brief Field manifest, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_manifest, put=__cordl_internal_set_manifest)) ::Meta::Conduit::Manifest*  manifest;

static inline ::Meta::Conduit::ManifestLoader___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <LoadManifestFromJsonAsync>b__0, addr 0x9e22404, size 0x2dc, virtual false, abstract: false, final false
inline void _LoadManifestFromJsonAsync_b__0() ;

constexpr ::Meta::Conduit::ManifestLoader* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Conduit::ManifestLoader*& __cordl_internal_get___4__this() ;

constexpr ::Meta::Conduit::Manifest* const& __cordl_internal_get_manifest() const;

constexpr ::Meta::Conduit::Manifest*& __cordl_internal_get_manifest() ;

constexpr void __cordl_internal_set___4__this(::Meta::Conduit::ManifestLoader*  value) ;

constexpr void __cordl_internal_set_manifest(::Meta::Conduit::Manifest*  value) ;

/// @brief Method .ctor, addr 0x9e223fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManifestLoader___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManifestLoader___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManifestLoader___c__DisplayClass6_0(ManifestLoader___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManifestLoader___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManifestLoader___c__DisplayClass6_0(ManifestLoader___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25420};

/// @brief Field manifest, offset: 0x10, size: 0x8, def value: None
 ::Meta::Conduit::Manifest*  ___manifest;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Meta::Conduit::ManifestLoader*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::ManifestLoader___c__DisplayClass6_0, ___manifest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestLoader___c__DisplayClass6_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::ManifestLoader___c__DisplayClass6_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::Conduit
