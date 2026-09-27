#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckTelemetryContextProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckTelemetryContextProvider)
namespace Liv::Lck::Core::Serialization {
class ILckSerializer;
}
namespace Liv::Lck::Core {
class ILckTelemetryContextProvider;
}
namespace Liv::Lck::Core {
struct LckTelemetryContextType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Core {
class LckTelemetryContextProvider;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::LckTelemetryContextProvider*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckTelemetryContextProvider*, "Liv.Lck.Core", "LckTelemetryContextProvider");
// [Preserve]
// Dependencies System.Object
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.LckTelemetryContextProvider
class CORDL_TYPE LckTelemetryContextProvider : public ::System::Object {
public:
// Declarations
/// @brief Field _serializer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__serializer, put=__cordl_internal_set__serializer)) ::Liv::Lck::Core::Serialization::ILckSerializer*  _serializer;

/// @brief Convert operator to "::Liv::Lck::Core::ILckTelemetryContextProvider"
constexpr operator  ::Liv::Lck::Core::ILckTelemetryContextProvider*() noexcept;

/// @brief Method ClearTelemetryContext, addr 0x9d01e0c, size 0xc0, virtual true, abstract: false, final true
inline void ClearTelemetryContext(::Liv::Lck::Core::LckTelemetryContextType  contextType) ;

/// @brief [Preserve]
static inline ::Liv::Lck::Core::LckTelemetryContextProvider* New_ctor() ;

/// @brief Method SetTelemetryContext, addr 0x9d01a18, size 0x3f4, virtual true, abstract: false, final true
inline void SetTelemetryContext(::Liv::Lck::Core::LckTelemetryContextType  contextType, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  context) ;

constexpr ::Liv::Lck::Core::Serialization::ILckSerializer* const& __cordl_internal_get__serializer() const;

constexpr ::Liv::Lck::Core::Serialization::ILckSerializer*& __cordl_internal_get__serializer() ;

constexpr void __cordl_internal_set__serializer(::Liv::Lck::Core::Serialization::ILckSerializer*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d01940, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::Core::ILckTelemetryContextProvider"
constexpr ::Liv::Lck::Core::ILckTelemetryContextProvider* i___Liv__Lck__Core__ILckTelemetryContextProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckTelemetryContextProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckTelemetryContextProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckTelemetryContextProvider(LckTelemetryContextProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckTelemetryContextProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckTelemetryContextProvider(LckTelemetryContextProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31934};

/// @brief Field _serializer, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::Core::Serialization::ILckSerializer*  ____serializer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::LckTelemetryContextProvider, ____serializer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::LckTelemetryContextProvider) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck::Core
