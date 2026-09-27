#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/AstarSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AstarSerializer)
namespace Pathfinding::Ionic::Zip {
class ZipEntry;
}
namespace Pathfinding::Ionic::Zip {
class ZipFile;
}
namespace Pathfinding::Serialization {
class AstarSerializer___c__DisplayClass30_0;
}
namespace Pathfinding::Serialization {
class AstarSerializer___c__DisplayClass31_0;
}
namespace Pathfinding::Serialization {
class AstarSerializer___c__DisplayClass33_0;
}
namespace Pathfinding::Serialization {
class AstarSerializer___c__DisplayClass44_0;
}
namespace Pathfinding::Serialization {
class AstarSerializer___c__DisplayClass45_0;
}
namespace Pathfinding::Serialization {
class AstarSerializer___c__DisplayClass46_0;
}
namespace Pathfinding::Serialization {
class GraphMeta;
}
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
namespace Pathfinding::Serialization {
class SerializeSettings;
}
namespace Pathfinding {
class AstarData;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class NavGraph;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Text {
class UTF8Encoding;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Type;
}
namespace System {
class Version;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Pathfinding::Serialization {
class AstarSerializer;
}
namespace Pathfinding::Serialization {
class AstarSerializer___c__DisplayClass30_0;
}
namespace Pathfinding::Serialization {
class AstarSerializer___c__DisplayClass31_0;
}
namespace Pathfinding::Serialization {
class AstarSerializer___c__DisplayClass33_0;
}
namespace Pathfinding::Serialization {
class AstarSerializer___c__DisplayClass44_0;
}
namespace Pathfinding::Serialization {
class AstarSerializer___c__DisplayClass45_0;
}
namespace Pathfinding::Serialization {
class AstarSerializer___c__DisplayClass46_0;
}
// Write type traits
MARK_REF_T(::Pathfinding::Serialization::AstarSerializer*);
MARK_REF_T(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0*);
MARK_REF_T(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0*);
MARK_REF_T(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0*);
MARK_REF_T(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0*);
MARK_REF_T(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0*);
MARK_REF_T(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Serialization::AstarSerializer*, "Pathfinding.Serialization", "AstarSerializer");
DEFINE_IL2CPP_CLASS(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0*, "Pathfinding.Serialization", "AstarSerializer/<>c__DisplayClass30_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0*, "Pathfinding.Serialization", "AstarSerializer/<>c__DisplayClass31_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0*, "Pathfinding.Serialization", "AstarSerializer/<>c__DisplayClass33_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0*, "Pathfinding.Serialization", "AstarSerializer/<>c__DisplayClass44_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0*, "Pathfinding.Serialization", "AstarSerializer/<>c__DisplayClass45_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0*, "Pathfinding.Serialization", "AstarSerializer/<>c__DisplayClass46_0");
// Dependencies Pathfinding.NavGraph, System.Object
namespace Pathfinding::Serialization {
// Is value type: false
// CS Name: Pathfinding.Serialization.AstarSerializer
class CORDL_TYPE AstarSerializer : public ::System::Object {
public:
// Declarations
using __c__DisplayClass30_0 = ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0;

using __c__DisplayClass31_0 = ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0;

using __c__DisplayClass33_0 = ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0;

using __c__DisplayClass44_0 = ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0;

using __c__DisplayClass45_0 = ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0;

using __c__DisplayClass46_0 = ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0;

/// @brief Field V3_8_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_V3_8_3, put=setStaticF_V3_8_3)) ::System::Version*  V3_8_3;

/// @brief Field V3_9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_V3_9_0, put=setStaticF_V3_9_0)) ::System::Version*  V3_9_0;

/// @brief Field V4_1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_V4_1_0, put=setStaticF_V4_1_0)) ::System::Version*  V4_1_0;

/// @brief Field _stringBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__stringBuilder, put=setStaticF__stringBuilder)) ::System::Text::StringBuilder*  _stringBuilder;

/// @brief Field checksum, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_checksum, put=__cordl_internal_set_checksum)) uint32_t  checksum;

/// @brief Field contextRoot, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_contextRoot, put=__cordl_internal_set_contextRoot)) ::UnityW<::UnityEngine::GameObject>  contextRoot;

/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::Pathfinding::AstarData*  data;

/// @brief Field encoding, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_encoding, put=__cordl_internal_set_encoding)) ::System::Text::UTF8Encoding*  encoding;

/// @brief Field graphIndexInZip, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphIndexInZip, put=__cordl_internal_set_graphIndexInZip)) ::System::Collections::Generic::Dictionary_2<::Pathfinding::NavGraph*,int32_t>*  graphIndexInZip;

/// @brief Field graphIndexOffset, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphIndexOffset, put=__cordl_internal_set_graphIndexOffset)) int32_t  graphIndexOffset;

/// @brief Field graphs, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphs, put=__cordl_internal_set_graphs)) ::ArrayW<::Pathfinding::NavGraph*>  graphs;

/// @brief Field meta, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_meta, put=__cordl_internal_set_meta)) ::Pathfinding::Serialization::GraphMeta*  meta;

/// @brief Field settings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::Pathfinding::Serialization::SerializeSettings*  settings;

/// @brief Field zip, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_zip, put=__cordl_internal_set_zip)) ::Pathfinding::Ionic::Zip::ZipFile*  zip;

/// @brief Field zipStream, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_zipStream, put=__cordl_internal_set_zipStream)) ::System::IO::MemoryStream*  zipStream;

/// @brief Method AddChecksum, addr 0x5ecddf4, size 0x28, virtual false, abstract: false, final false
inline void AddChecksum(::ArrayW<uint8_t>  bytes) ;

/// @brief Method AddEntry, addr 0x5ecde1c, size 0x18, virtual false, abstract: false, final false
inline void AddEntry(::StringW  name, ::ArrayW<uint8_t>  bytes) ;

/// @brief Method AnyDestroyedNodesInGraphs, addr 0x5ed0e60, size 0x120, virtual false, abstract: false, final false
inline bool AnyDestroyedNodesInGraphs() ;

/// @brief Method CloseDeserialize, addr 0x5ed0110, size 0x5c, virtual false, abstract: false, final false
inline void CloseDeserialize() ;

/// @brief Method CloseSerialize, addr 0x5ecdf60, size 0x40c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> CloseSerialize() ;

/// @brief Method ContainsEntry, addr 0x5ecf59c, size 0x28, virtual false, abstract: false, final false
inline bool ContainsEntry(::StringW  name) ;

/// @brief Method DeserializeBinaryMeta, addr 0x5ecfbf8, size 0x488, virtual false, abstract: false, final false
inline ::Pathfinding::Serialization::GraphMeta* DeserializeBinaryMeta(::Pathfinding::Ionic::Zip::ZipEntry*  entry) ;

/// @brief Method DeserializeEditorSettingsCompatibility, addr 0x5ed1a20, size 0x1e4, virtual false, abstract: false, final false
inline void DeserializeEditorSettingsCompatibility() ;

/// @brief Method DeserializeExtraInfo, addr 0x5ed0c8c, size 0x1d4, virtual false, abstract: false, final false
inline bool DeserializeExtraInfo(::Pathfinding::NavGraph*  graph) ;

/// @brief Method DeserializeExtraInfo, addr 0x5ed16a8, size 0x130, virtual false, abstract: false, final false
inline void DeserializeExtraInfo() ;

/// @brief Method DeserializeGraph, addr 0x5ed016c, size 0x50c, virtual false, abstract: false, final false
inline ::Pathfinding::NavGraph* DeserializeGraph(int32_t  zipIndex, int32_t  graphIndex, ::ArrayW<::System::Type*>  availableGraphTypes) ;

/// @brief Method DeserializeGraphs, addr 0x5ed0a88, size 0x204, virtual false, abstract: false, final false
inline ::ArrayW<::Pathfinding::NavGraph*> DeserializeGraphs(::ArrayW<::System::Type*>  availableGraphTypes) ;

/// @brief Method DeserializeMeta, addr 0x5ecfad0, size 0x128, virtual false, abstract: false, final false
inline ::Pathfinding::Serialization::GraphMeta* DeserializeMeta(::Pathfinding::Ionic::Zip::ZipEntry*  entry) ;

/// @brief Method DeserializeNodeLinks, addr 0x5ed17d8, size 0x114, virtual false, abstract: false, final false
inline void DeserializeNodeLinks(::ArrayW<::Pathfinding::GraphNode*>  int2Node) ;

/// @brief Method DeserializeNodeReferenceMap, addr 0x5ed0f88, size 0x4a0, virtual false, abstract: false, final false
inline ::ArrayW<::Pathfinding::GraphNode*> DeserializeNodeReferenceMap() ;

/// @brief Method DeserializeNodeReferences, addr 0x5ed1430, size 0x270, virtual false, abstract: false, final false
inline void DeserializeNodeReferences(::Pathfinding::NavGraph*  graph, ::ArrayW<::Pathfinding::GraphNode*>  int2Node) ;

/// @brief Method FullyDefinedVersion, addr 0x5ed0080, size 0x90, virtual false, abstract: false, final false
static inline ::System::Version* FullyDefinedVersion(::System::Version*  v) ;

/// @brief Method GetBinaryReader, addr 0x5ed09d0, size 0xb8, virtual false, abstract: false, final false
static inline ::System::IO::BinaryReader* GetBinaryReader(::Pathfinding::Ionic::Zip::ZipEntry*  entry) ;

/// @brief Method GetChecksum, addr 0x5ecde34, size 0x8, virtual false, abstract: false, final false
inline uint32_t GetChecksum() ;

/// @brief Method GetEntry, addr 0x5ecf584, size 0x18, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ZipEntry* GetEntry(::StringW  name) ;

/// @brief Method GetMaxNodeIndexInAllGraphs, addr 0x5eceaf8, size 0x130, virtual false, abstract: false, final false
static inline int32_t GetMaxNodeIndexInAllGraphs(::ArrayW<::Pathfinding::NavGraph*>  graphs) ;

/// @brief Method GetString, addr 0x5ed0824, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW GetString(::Pathfinding::Ionic::Zip::ZipEntry*  entry) ;

/// @brief Method GetStringBuilder, addr 0x5ecdc20, size 0x78, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* GetStringBuilder() ;

/// @brief Method LoadFromFile, addr 0x5ed1d78, size 0x1d0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> LoadFromFile(::StringW  path) ;

static inline ::Pathfinding::Serialization::AstarSerializer* New_ctor(::Pathfinding::AstarData*  data, ::UnityEngine::GameObject*  contextRoot) ;

static inline ::Pathfinding::Serialization::AstarSerializer* New_ctor(::Pathfinding::AstarData*  data, ::Pathfinding::Serialization::SerializeSettings*  settings, ::UnityEngine::GameObject*  contextRoot) ;

/// @brief Method OpenDeserialize, addr 0x5ecf5c4, size 0x50c, virtual false, abstract: false, final false
inline bool OpenDeserialize(::ArrayW<uint8_t>  bytes) ;

/// @brief Method OpenSerialize, addr 0x5ecde3c, size 0x11c, virtual false, abstract: false, final false
inline void OpenSerialize() ;

/// @brief Method PostDeserialization, addr 0x5ed18ec, size 0x134, virtual false, abstract: false, final false
inline void PostDeserialization() ;

/// @brief Method SaveToFile, addr 0x5ed1c04, size 0x174, virtual false, abstract: false, final false
static inline void SaveToFile(::StringW  path, ::ArrayW<uint8_t>  data) ;

/// @brief Method Serialize, addr 0x5ece9ac, size 0xcc, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> Serialize(::Pathfinding::NavGraph*  graph) ;

/// @brief Method SerializeExtraInfo, addr 0x5ecf1b8, size 0x2c8, virtual false, abstract: false, final false
inline void SerializeExtraInfo() ;

/// @brief Method SerializeGraphExtraInfo, addr 0x5eceeb0, size 0x170, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SerializeGraphExtraInfo(::Pathfinding::NavGraph*  graph) ;

/// @brief Method SerializeGraphNodeReferences, addr 0x5ecf020, size 0x190, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SerializeGraphNodeReferences(::Pathfinding::NavGraph*  graph) ;

/// @brief Method SerializeGraphs, addr 0x5ece7bc, size 0x1f0, virtual false, abstract: false, final false
inline void SerializeGraphs(::ArrayW<::Pathfinding::NavGraph*>  _graphs) ;

/// @brief Method SerializeMeta, addr 0x5ece36c, size 0x450, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> SerializeMeta() ;

/// @brief Method SerializeNodeIndices, addr 0x5ecec30, size 0x278, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SerializeNodeIndices(::ArrayW<::Pathfinding::NavGraph*>  graphs) ;

/// @brief Method SerializeNodeLinks, addr 0x5ecf480, size 0x104, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> SerializeNodeLinks() ;

/// [Obsolete("Not used anymore. You can safely remove the call to this function.")]
/// @brief Method SerializeNodes, addr 0x5eceaf4, size 0x4, virtual false, abstract: false, final false
inline void SerializeNodes() ;

/// @brief Method SetGraphIndexOffset, addr 0x5ecddec, size 0x8, virtual false, abstract: false, final false
inline void SetGraphIndexOffset(int32_t  offset) ;

constexpr uint32_t const& __cordl_internal_get_checksum() const;

constexpr uint32_t& __cordl_internal_get_checksum() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_contextRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_contextRoot() ;

constexpr ::Pathfinding::AstarData* const& __cordl_internal_get_data() const;

constexpr ::Pathfinding::AstarData*& __cordl_internal_get_data() ;

constexpr ::System::Text::UTF8Encoding* const& __cordl_internal_get_encoding() const;

constexpr ::System::Text::UTF8Encoding*& __cordl_internal_get_encoding() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::NavGraph*,int32_t>* const& __cordl_internal_get_graphIndexInZip() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::NavGraph*,int32_t>*& __cordl_internal_get_graphIndexInZip() ;

constexpr int32_t const& __cordl_internal_get_graphIndexOffset() const;

constexpr int32_t& __cordl_internal_get_graphIndexOffset() ;

constexpr ::ArrayW<::Pathfinding::NavGraph*> const& __cordl_internal_get_graphs() const;

constexpr ::ArrayW<::Pathfinding::NavGraph*>& __cordl_internal_get_graphs() ;

constexpr ::Pathfinding::Serialization::GraphMeta* const& __cordl_internal_get_meta() const;

constexpr ::Pathfinding::Serialization::GraphMeta*& __cordl_internal_get_meta() ;

constexpr ::Pathfinding::Serialization::SerializeSettings* const& __cordl_internal_get_settings() const;

constexpr ::Pathfinding::Serialization::SerializeSettings*& __cordl_internal_get_settings() ;

constexpr ::Pathfinding::Ionic::Zip::ZipFile* const& __cordl_internal_get_zip() const;

constexpr ::Pathfinding::Ionic::Zip::ZipFile*& __cordl_internal_get_zip() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_zipStream() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get_zipStream() ;

constexpr void __cordl_internal_set_checksum(uint32_t  value) ;

constexpr void __cordl_internal_set_contextRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_data(::Pathfinding::AstarData*  value) ;

constexpr void __cordl_internal_set_encoding(::System::Text::UTF8Encoding*  value) ;

constexpr void __cordl_internal_set_graphIndexInZip(::System::Collections::Generic::Dictionary_2<::Pathfinding::NavGraph*,int32_t>*  value) ;

constexpr void __cordl_internal_set_graphIndexOffset(int32_t  value) ;

constexpr void __cordl_internal_set_graphs(::ArrayW<::Pathfinding::NavGraph*>  value) ;

constexpr void __cordl_internal_set_meta(::Pathfinding::Serialization::GraphMeta*  value) ;

constexpr void __cordl_internal_set_settings(::Pathfinding::Serialization::SerializeSettings*  value) ;

constexpr void __cordl_internal_set_zip(::Pathfinding::Ionic::Zip::ZipFile*  value) ;

constexpr void __cordl_internal_set_zipStream(::System::IO::MemoryStream*  value) ;

/// @brief Method .ctor, addr 0x5ecdc98, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::AstarData*  data, ::UnityEngine::GameObject*  contextRoot) ;

/// @brief Method .ctor, addr 0x5ecdd2c, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::AstarData*  data, ::Pathfinding::Serialization::SerializeSettings*  settings, ::UnityEngine::GameObject*  contextRoot) ;

static inline ::System::Version* getStaticF_V3_8_3() ;

static inline ::System::Version* getStaticF_V3_9_0() ;

static inline ::System::Version* getStaticF_V4_1_0() ;

static inline ::System::Text::StringBuilder* getStaticF__stringBuilder() ;

static inline void setStaticF_V3_8_3(::System::Version*  value) ;

static inline void setStaticF_V3_9_0(::System::Version*  value) ;

static inline void setStaticF_V4_1_0(::System::Version*  value) ;

static inline void setStaticF__stringBuilder(::System::Text::StringBuilder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarSerializer(AstarSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarSerializer(AstarSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21450};

/// @brief Field binaryExt offset 0xffffffff size 0x8
static constexpr ::ConstString  binaryExt{u".binary"};

/// @brief Field jsonExt offset 0xffffffff size 0x8
static constexpr ::ConstString  jsonExt{u".json"};

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::AstarData*  ___data;

/// @brief Field zip, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::ZipFile*  ___zip;

/// @brief Field zipStream, offset: 0x20, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ___zipStream;

/// @brief Field meta, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::Serialization::GraphMeta*  ___meta;

/// @brief Field settings, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::Serialization::SerializeSettings*  ___settings;

/// @brief Field contextRoot, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___contextRoot;

/// @brief Field graphs, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::NavGraph*>  ___graphs;

/// @brief Field graphIndexInZip, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Pathfinding::NavGraph*,int32_t>*  ___graphIndexInZip;

/// @brief Field graphIndexOffset, offset: 0x50, size: 0x4, def value: None
 int32_t  ___graphIndexOffset;

/// @brief Field checksum, offset: 0x54, size: 0x4, def value: None
 uint32_t  ___checksum;

/// @brief Field encoding, offset: 0x58, size: 0x8, def value: None
 ::System::Text::UTF8Encoding*  ___encoding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer, ___zip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer, ___zipStream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer, ___meta) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer, ___settings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer, ___contextRoot) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer, ___graphs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer, ___graphIndexInZip) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer, ___graphIndexOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer, ___checksum) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer, ___encoding) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Serialization::AstarSerializer) == 0x60, "Size mismatch!");

} // namespace end def Pathfinding::Serialization
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Serialization {
// Is value type: false
// CS Name: Pathfinding.Serialization.AstarSerializer/<>c__DisplayClass46_0
class CORDL_TYPE AstarSerializer___c__DisplayClass46_0 : public ::System::Object {
public:
// Declarations
/// @brief Field ctx, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ctx, put=__cordl_internal_set_ctx)) ::Pathfinding::Serialization::GraphSerializationContext*  ctx;

static inline ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0* New_ctor() ;

/// @brief Method <DeserializeNodeReferences>b__0, addr 0x5ed2304, size 0x28, virtual false, abstract: false, final false
inline void _DeserializeNodeReferences_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::Pathfinding::Serialization::GraphSerializationContext* const& __cordl_internal_get_ctx() const;

constexpr ::Pathfinding::Serialization::GraphSerializationContext*& __cordl_internal_get_ctx() ;

constexpr void __cordl_internal_set_ctx(::Pathfinding::Serialization::GraphSerializationContext*  value) ;

/// @brief Method .ctor, addr 0x5ed16a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarSerializer___c__DisplayClass46_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarSerializer___c__DisplayClass46_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarSerializer___c__DisplayClass46_0(AstarSerializer___c__DisplayClass46_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarSerializer___c__DisplayClass46_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarSerializer___c__DisplayClass46_0(AstarSerializer___c__DisplayClass46_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21449};

/// @brief Field ctx, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Serialization::GraphSerializationContext*  ___ctx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0, ___ctx) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding::Serialization
// [CompilerGenerated]
// Dependencies Pathfinding.GraphNode, System.Object
namespace Pathfinding::Serialization {
// Is value type: false
// CS Name: Pathfinding.Serialization.AstarSerializer/<>c__DisplayClass45_0
class CORDL_TYPE AstarSerializer___c__DisplayClass45_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Action_1<::Pathfinding::GraphNode*>*  __9__0;

/// @brief Field int2Node, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_int2Node, put=__cordl_internal_set_int2Node)) ::ArrayW<::Pathfinding::GraphNode*>  int2Node;

/// @brief Field reader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_reader, put=__cordl_internal_set_reader)) ::System::IO::BinaryReader*  reader;

static inline ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0* New_ctor() ;

/// @brief Method <DeserializeNodeReferenceMap>b__0, addr 0x5ed2280, size 0x84, virtual false, abstract: false, final false
inline void _DeserializeNodeReferenceMap_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& __cordl_internal_get___9__0() ;

constexpr ::ArrayW<::Pathfinding::GraphNode*> const& __cordl_internal_get_int2Node() const;

constexpr ::ArrayW<::Pathfinding::GraphNode*>& __cordl_internal_get_int2Node() ;

constexpr ::System::IO::BinaryReader* const& __cordl_internal_get_reader() const;

constexpr ::System::IO::BinaryReader*& __cordl_internal_get_reader() ;

constexpr void __cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_int2Node(::ArrayW<::Pathfinding::GraphNode*>  value) ;

constexpr void __cordl_internal_set_reader(::System::IO::BinaryReader*  value) ;

/// @brief Method .ctor, addr 0x5ed1428, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarSerializer___c__DisplayClass45_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarSerializer___c__DisplayClass45_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarSerializer___c__DisplayClass45_0(AstarSerializer___c__DisplayClass45_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarSerializer___c__DisplayClass45_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarSerializer___c__DisplayClass45_0(AstarSerializer___c__DisplayClass45_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21448};

/// @brief Field reader, offset: 0x10, size: 0x8, def value: None
 ::System::IO::BinaryReader*  ___reader;

/// @brief Field int2Node, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::GraphNode*>  ___int2Node;

/// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::GraphNode*>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0, ___reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0, ___int2Node) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0, _____9__0) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding::Serialization
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Serialization {
// Is value type: false
// CS Name: Pathfinding.Serialization.AstarSerializer/<>c__DisplayClass44_0
class CORDL_TYPE AstarSerializer___c__DisplayClass44_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Action_1<::Pathfinding::GraphNode*>*  __9__0;

/// @brief Field result, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) bool  result;

static inline ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0* New_ctor() ;

/// @brief Method <AnyDestroyedNodesInGraphs>b__0, addr 0x5ed2250, size 0x30, virtual false, abstract: false, final false
inline void _AnyDestroyedNodesInGraphs_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& __cordl_internal_get___9__0() ;

constexpr bool const& __cordl_internal_get_result() const;

constexpr bool& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_result(bool  value) ;

/// @brief Method .ctor, addr 0x5ed0f80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarSerializer___c__DisplayClass44_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarSerializer___c__DisplayClass44_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarSerializer___c__DisplayClass44_0(AstarSerializer___c__DisplayClass44_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarSerializer___c__DisplayClass44_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarSerializer___c__DisplayClass44_0(AstarSerializer___c__DisplayClass44_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21447};

/// @brief Field result, offset: 0x10, size: 0x1, def value: None
 bool  ___result;

/// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::GraphNode*>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0, ___result) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0, _____9__0) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding::Serialization
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Serialization {
// Is value type: false
// CS Name: Pathfinding.Serialization.AstarSerializer/<>c__DisplayClass33_0
class CORDL_TYPE AstarSerializer___c__DisplayClass33_0 : public ::System::Object {
public:
// Declarations
/// @brief Field ctx, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ctx, put=__cordl_internal_set_ctx)) ::Pathfinding::Serialization::GraphSerializationContext*  ctx;

static inline ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0* New_ctor() ;

/// @brief Method <SerializeGraphNodeReferences>b__0, addr 0x5ed2228, size 0x28, virtual false, abstract: false, final false
inline void _SerializeGraphNodeReferences_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::Pathfinding::Serialization::GraphSerializationContext* const& __cordl_internal_get_ctx() const;

constexpr ::Pathfinding::Serialization::GraphSerializationContext*& __cordl_internal_get_ctx() ;

constexpr void __cordl_internal_set_ctx(::Pathfinding::Serialization::GraphSerializationContext*  value) ;

/// @brief Method .ctor, addr 0x5ecf1b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarSerializer___c__DisplayClass33_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarSerializer___c__DisplayClass33_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarSerializer___c__DisplayClass33_0(AstarSerializer___c__DisplayClass33_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarSerializer___c__DisplayClass33_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarSerializer___c__DisplayClass33_0(AstarSerializer___c__DisplayClass33_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21446};

/// @brief Field ctx, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Serialization::GraphSerializationContext*  ___ctx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0, ___ctx) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding::Serialization
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Serialization {
// Is value type: false
// CS Name: Pathfinding.Serialization.AstarSerializer/<>c__DisplayClass31_0
class CORDL_TYPE AstarSerializer___c__DisplayClass31_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Action_1<::Pathfinding::GraphNode*>*  __9__0;

/// @brief Field maxNodeIndex2, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNodeIndex2, put=__cordl_internal_set_maxNodeIndex2)) int32_t  maxNodeIndex2;

/// @brief Field writer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_writer, put=__cordl_internal_set_writer)) ::System::IO::BinaryWriter*  writer;

static inline ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0* New_ctor() ;

/// @brief Method <SerializeNodeIndices>b__0, addr 0x5ed2170, size 0xb8, virtual false, abstract: false, final false
inline void _SerializeNodeIndices_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& __cordl_internal_get___9__0() ;

constexpr int32_t const& __cordl_internal_get_maxNodeIndex2() const;

constexpr int32_t& __cordl_internal_get_maxNodeIndex2() ;

constexpr ::System::IO::BinaryWriter* const& __cordl_internal_get_writer() const;

constexpr ::System::IO::BinaryWriter*& __cordl_internal_get_writer() ;

constexpr void __cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_maxNodeIndex2(int32_t  value) ;

constexpr void __cordl_internal_set_writer(::System::IO::BinaryWriter*  value) ;

/// @brief Method .ctor, addr 0x5eceea8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarSerializer___c__DisplayClass31_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarSerializer___c__DisplayClass31_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarSerializer___c__DisplayClass31_0(AstarSerializer___c__DisplayClass31_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarSerializer___c__DisplayClass31_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarSerializer___c__DisplayClass31_0(AstarSerializer___c__DisplayClass31_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21445};

/// @brief Field maxNodeIndex2, offset: 0x10, size: 0x4, def value: None
 int32_t  ___maxNodeIndex2;

/// @brief Field writer, offset: 0x18, size: 0x8, def value: None
 ::System::IO::BinaryWriter*  ___writer;

/// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::GraphNode*>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0, ___maxNodeIndex2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0, ___writer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0, _____9__0) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding::Serialization
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Serialization {
// Is value type: false
// CS Name: Pathfinding.Serialization.AstarSerializer/<>c__DisplayClass30_0
class CORDL_TYPE AstarSerializer___c__DisplayClass30_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Action_1<::Pathfinding::GraphNode*>*  __9__0;

/// @brief Field maxIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxIndex, put=__cordl_internal_set_maxIndex)) int32_t  maxIndex;

static inline ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0* New_ctor() ;

/// @brief Method <GetMaxNodeIndexInAllGraphs>b__0, addr 0x5ed207c, size 0xf4, virtual false, abstract: false, final false
inline void _GetMaxNodeIndexInAllGraphs_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& __cordl_internal_get___9__0() ;

constexpr int32_t const& __cordl_internal_get_maxIndex() const;

constexpr int32_t& __cordl_internal_get_maxIndex() ;

constexpr void __cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_maxIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ecec28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarSerializer___c__DisplayClass30_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarSerializer___c__DisplayClass30_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarSerializer___c__DisplayClass30_0(AstarSerializer___c__DisplayClass30_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarSerializer___c__DisplayClass30_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarSerializer___c__DisplayClass30_0(AstarSerializer___c__DisplayClass30_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21444};

/// @brief Field maxIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___maxIndex;

/// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::GraphNode*>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0, ___maxIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0, _____9__0) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding::Serialization
