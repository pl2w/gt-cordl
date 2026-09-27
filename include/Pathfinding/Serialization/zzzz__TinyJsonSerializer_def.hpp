#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/TinyJsonSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TinyJsonSerializer)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Pathfinding::Serialization {
class TinyJsonSerializer;
}
// Write type traits
MARK_REF_T(::Pathfinding::Serialization::TinyJsonSerializer*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Serialization::TinyJsonSerializer*, "Pathfinding.Serialization", "TinyJsonSerializer");
// Dependencies System.Object
namespace Pathfinding::Serialization {
// Is value type: false
// CS Name: Pathfinding.Serialization.TinyJsonSerializer
class CORDL_TYPE TinyJsonSerializer : public ::System::Object {
public:
// Declarations
/// @brief Field invariantCulture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_invariantCulture, put=setStaticF_invariantCulture)) ::System::Globalization::CultureInfo*  invariantCulture;

/// @brief Field output, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_output, put=__cordl_internal_set_output)) ::System::Text::StringBuilder*  output;

/// @brief Field serializers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializers, put=__cordl_internal_set_serializers)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Action_1<::System::Object*>*>*  serializers;

static inline ::Pathfinding::Serialization::TinyJsonSerializer* New_ctor() ;

/// @brief Method QuotedField, addr 0x5ed3220, size 0x6c, virtual false, abstract: false, final false
inline void QuotedField(::StringW  name, ::StringW  contents) ;

/// @brief Method Serialize, addr 0x5ed283c, size 0x5fc, virtual false, abstract: false, final false
inline void Serialize(::System::Object*  obj) ;

/// @brief Method Serialize, addr 0x5ecea78, size 0x7c, virtual false, abstract: false, final false
static inline void Serialize(::System::Object*  obj, ::System::Text::StringBuilder*  output) ;

/// @brief Method SerializeUnityObject, addr 0x5ed2e3c, size 0x3e4, virtual false, abstract: false, final false
inline void SerializeUnityObject(::UnityEngine::Object*  obj) ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_output() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_output() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Action_1<::System::Object*>*>* const& __cordl_internal_get_serializers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Action_1<::System::Object*>*>*& __cordl_internal_get_serializers() ;

constexpr void __cordl_internal_set_output(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_serializers(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Action_1<::System::Object*>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__4_0, addr 0x5ed330c, size 0xec, virtual false, abstract: false, final false
inline void __ctor_b__4_0(::System::Object*  v) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__4_1, addr 0x5ed33f8, size 0xb0, virtual false, abstract: false, final false
inline void __ctor_b__4_1(::System::Object*  v) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__4_2, addr 0x5ed34e4, size 0xb0, virtual false, abstract: false, final false
inline void __ctor_b__4_2(::System::Object*  v) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__4_3, addr 0x5ed3594, size 0x168, virtual false, abstract: false, final false
inline void __ctor_b__4_3(::System::Object*  v) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__4_4, addr 0x5ed36fc, size 0x1dc, virtual false, abstract: false, final false
inline void __ctor_b__4_4(::System::Object*  v) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__4_5, addr 0x5ed38d8, size 0x74, virtual false, abstract: false, final false
inline void __ctor_b__4_5(::System::Object*  v) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__4_6, addr 0x5ed394c, size 0xcc, virtual false, abstract: false, final false
inline void __ctor_b__4_6(::System::Object*  v) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__4_7, addr 0x5ed34a8, size 0x3c, virtual false, abstract: false, final false
inline void __ctor_b__4_7(::System::Object*  v) ;

/// @brief Method .ctor, addr 0x5ed234c, size 0x4f0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Globalization::CultureInfo* getStaticF_invariantCulture() ;

static inline void setStaticF_invariantCulture(::System::Globalization::CultureInfo*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TinyJsonSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TinyJsonSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TinyJsonSerializer(TinyJsonSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TinyJsonSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TinyJsonSerializer(TinyJsonSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21455};

/// @brief Field output, offset: 0x10, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___output;

/// @brief Field serializers, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Action_1<::System::Object*>*>*  ___serializers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Serialization::TinyJsonSerializer, ___output) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::TinyJsonSerializer, ___serializers) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Serialization::TinyJsonSerializer) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding::Serialization
