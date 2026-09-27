#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Serialization/LckMsgPackSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckMsgPackSerializer)
namespace Liv::Lck::Core::Serialization {
class ILckSerializer;
}
namespace Liv::Lck::Core {
struct SerializationType;
}
namespace SouthPointe::Serialization::MessagePack {
class MessagePackFormatter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Core::Serialization {
class LckMsgPackSerializer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::Serialization::LckMsgPackSerializer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::Serialization::LckMsgPackSerializer*, "Liv.Lck.Core.Serialization", "LckMsgPackSerializer");
// [Preserve]
// Dependencies System.Object
namespace Liv::Lck::Core::Serialization {
// Is value type: false
// CS Name: Liv.Lck.Core.Serialization.LckMsgPackSerializer
class CORDL_TYPE LckMsgPackSerializer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SerializationType)) ::Liv::Lck::Core::SerializationType  SerializationType;

/// @brief Field _formatter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__formatter, put=__cordl_internal_set__formatter)) ::SouthPointe::Serialization::MessagePack::MessagePackFormatter*  _formatter;

/// @brief Convert operator to "::Liv::Lck::Core::Serialization::ILckSerializer"
constexpr operator  ::Liv::Lck::Core::Serialization::ILckSerializer*() noexcept;

/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline T Deserialize(::ArrayW<uint8_t>  data) ;

/// @brief [Preserve]
static inline ::Liv::Lck::Core::Serialization::LckMsgPackSerializer* New_ctor() ;

/// @brief Method Serialize, addr 0x9d01f64, size 0x58, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> Serialize(::System::Object*  data) ;

constexpr ::SouthPointe::Serialization::MessagePack::MessagePackFormatter* const& __cordl_internal_get__formatter() const;

constexpr ::SouthPointe::Serialization::MessagePack::MessagePackFormatter*& __cordl_internal_get__formatter() ;

constexpr void __cordl_internal_set__formatter(::SouthPointe::Serialization::MessagePack::MessagePackFormatter*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d019a8, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SerializationType, addr 0x9d01f5c, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::Core::SerializationType get_SerializationType() ;

/// @brief Convert to "::Liv::Lck::Core::Serialization::ILckSerializer"
constexpr ::Liv::Lck::Core::Serialization::ILckSerializer* i___Liv__Lck__Core__Serialization__ILckSerializer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckMsgPackSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckMsgPackSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckMsgPackSerializer(LckMsgPackSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckMsgPackSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckMsgPackSerializer(LckMsgPackSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31937};

/// @brief Field _formatter, offset: 0x10, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::MessagePackFormatter*  ____formatter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::Serialization::LckMsgPackSerializer, ____formatter) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::Serialization::LckMsgPackSerializer) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck::Core::Serialization
