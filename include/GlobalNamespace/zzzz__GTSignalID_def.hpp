#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSignalID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTSignalID)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct GTSignalID;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTSignalID);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTSignalID, "", "GTSignalID");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTSignalID
struct CORDL_TYPE GTSignalID {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::GTSignalID>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::GTSignalID>*() ;

/// @brief Convert operator to "::System::IEquatable_1<int32_t>"
constexpr operator  ::System::IEquatable_1<int32_t>*() ;

/// @brief Method Equals, addr 0x594a684, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x594a710, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::GTSignalID  other) ;

/// @brief Method Equals, addr 0x594a720, size 0x10, virtual true, abstract: false, final true
inline bool Equals(int32_t  other) ;

/// @brief Method GetHashCode, addr 0x594a730, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::GTSignalID>"
constexpr ::System::IEquatable_1<::GlobalNamespace::GTSignalID>* i___System__IEquatable_1___GlobalNamespace__GTSignalID_() ;

/// @brief Convert to "::System::IEquatable_1<int32_t>"
constexpr ::System::IEquatable_1<int32_t>* i___System__IEquatable_1_int32_t_() ;

/// @brief Method op_Equality, addr 0x594a738, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::GTSignalID  x, ::GlobalNamespace::GTSignalID  y) ;

/// @brief Method op_Implicit, addr 0x594a754, size 0x54, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTSignalID op_Implicit___GlobalNamespace__GTSignalID(::StringW  s) ;

/// @brief Method op_Implicit, addr 0x594a750, size 0x4, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::GlobalNamespace::GTSignalID  sid) ;

/// @brief Method op_Inequality, addr 0x594a744, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::GTSignalID  x, ::GlobalNamespace::GTSignalID  y) ;

// Ctor Parameters []
// @brief default ctor
constexpr GTSignalID() ;

// Ctor Parameters [CppParam { name: "_id", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTSignalID(int32_t  _id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2290};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field _id, offset: 0x0, size: 0x4, def value: None
 int32_t  _id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTSignalID, _id) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTSignalID) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
