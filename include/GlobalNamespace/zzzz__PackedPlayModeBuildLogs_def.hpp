#pragma once
// IWYU pragma private; include "GlobalNamespace/PackedPlayModeBuildLogs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PackedPlayModeBuildLogs)
namespace GlobalNamespace {
struct PackedPlayModeBuildLogs_RuntimeBuildLog;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PackedPlayModeBuildLogs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PackedPlayModeBuildLogs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PackedPlayModeBuildLogs*, "", "PackedPlayModeBuildLogs");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackedPlayModeBuildLogs
class CORDL_TYPE PackedPlayModeBuildLogs : public ::System::Object {
public:
// Declarations
using RuntimeBuildLog = ::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog;

 __declspec(property(get=get_RuntimeBuildLogs, put=set_RuntimeBuildLogs)) ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>*  RuntimeBuildLogs;

/// @brief Field m_RuntimeBuildLogs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RuntimeBuildLogs, put=__cordl_internal_set_m_RuntimeBuildLogs)) ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>*  m_RuntimeBuildLogs;

static inline ::GlobalNamespace::PackedPlayModeBuildLogs* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>* const& __cordl_internal_get_m_RuntimeBuildLogs() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>*& __cordl_internal_get_m_RuntimeBuildLogs() ;

constexpr void __cordl_internal_set_m_RuntimeBuildLogs(::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>*  value) ;

/// @brief Method .ctor, addr 0xae4c290, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RuntimeBuildLogs, addr 0xae4c280, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>* get_RuntimeBuildLogs() ;

/// @brief Method set_RuntimeBuildLogs, addr 0xae4c288, size 0x8, virtual false, abstract: false, final false
inline void set_RuntimeBuildLogs(::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PackedPlayModeBuildLogs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PackedPlayModeBuildLogs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PackedPlayModeBuildLogs(PackedPlayModeBuildLogs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PackedPlayModeBuildLogs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PackedPlayModeBuildLogs(PackedPlayModeBuildLogs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29202};

/// [SerializeField]
/// @brief Field m_RuntimeBuildLogs, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>*  ___m_RuntimeBuildLogs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackedPlayModeBuildLogs, ___m_RuntimeBuildLogs) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PackedPlayModeBuildLogs) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
