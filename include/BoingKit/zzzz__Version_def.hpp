#pragma once
// IWYU pragma private; include "BoingKit/Version.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Version)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace BoingKit {
struct Version;
}
// Write type traits
MARK_VAL_T(::BoingKit::Version);
DEFINE_IL2CPP_CLASS(::BoingKit::Version, "BoingKit", "Version");
// Dependencies 
namespace BoingKit {
// Is value type: true
// CS Name: BoingKit.Version
struct CORDL_TYPE Version {
public:
// Declarations
/// @brief Field FirstTracked, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_FirstTracked, put=setStaticF_FirstTracked)) ::BoingKit::Version  FirstTracked;

/// @brief Field Invalid, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::BoingKit::Version  Invalid;

/// @brief Field LastUntracked, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_LastUntracked, put=setStaticF_LastUntracked)) ::BoingKit::Version  LastUntracked;

 __declspec(property(get=get_MajorVersion)) int32_t  MajorVersion;

 __declspec(property(get=get_MinorVersion)) int32_t  MinorVersion;

 __declspec(property(get=get_Revision)) int32_t  Revision;

/// @brief Convert operator to "::System::IEquatable_1<::BoingKit::Version>"
constexpr operator  ::System::IEquatable_1<::BoingKit::Version>*() ;

/// @brief Method Equals, addr 0x5e169ac, size 0xb0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5e16a5c, size 0xb0, virtual true, abstract: false, final true
inline bool Equals(::BoingKit::Version  other) ;

/// @brief Method GetHashCode, addr 0x5e16b0c, size 0xc0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsValid, addr 0x5e16790, size 0x94, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method ToString, addr 0x5e1660c, size 0x184, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5e165e8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  majorVersion, int32_t  minorVersion, int32_t  revision) ;

static inline ::BoingKit::Version getStaticF_FirstTracked() ;

static inline ::BoingKit::Version getStaticF_Invalid() ;

static inline ::BoingKit::Version getStaticF_LastUntracked() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_MajorVersion, addr 0x5e165f4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MajorVersion() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_MinorVersion, addr 0x5e165fc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MinorVersion() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Revision, addr 0x5e16604, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Revision() ;

/// @brief Convert to "::System::IEquatable_1<::BoingKit::Version>"
constexpr ::System::IEquatable_1<::BoingKit::Version>* i___System__IEquatable_1___BoingKit__Version_() ;

/// @brief Method op_Equality, addr 0x5e16824, size 0x100, virtual false, abstract: false, final false
static inline bool op_Equality(::BoingKit::Version  lhs, ::BoingKit::Version  rhs) ;

/// @brief Method op_Inequality, addr 0x5e16924, size 0x88, virtual false, abstract: false, final false
static inline bool op_Inequality(::BoingKit::Version  lhs, ::BoingKit::Version  rhs) ;

static inline void setStaticF_FirstTracked(::BoingKit::Version  value) ;

static inline void setStaticF_Invalid(::BoingKit::Version  value) ;

static inline void setStaticF_LastUntracked(::BoingKit::Version  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Version() ;

// Ctor Parameters [CppParam { name: "_MajorVersion_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MinorVersion_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Revision_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Version(int32_t  _MajorVersion_k__BackingField, int32_t  _MinorVersion_k__BackingField, int32_t  _Revision_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5174};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [CompilerGenerated]
/// @brief Field <MajorVersion>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _MajorVersion_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MinorVersion>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _MinorVersion_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Revision>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _Revision_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::Version, _MajorVersion_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::Version, _MinorVersion_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BoingKit::Version, _Revision_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::BoingKit::Version) == 0xc, "Size mismatch!");

} // namespace end def BoingKit
