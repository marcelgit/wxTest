##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=wxFuncionesMath
ConfigurationName      :=Debug
WorkspacePath          := "/home/marcelds/Documentos/wxTest"
ProjectPath            := "/home/marcelds/Documentos/wxTest/wxFuncionesMath"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=marcelds
Date                   :=12/27/15
CodeLitePath           :="/home/marcelds/.codelite"
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="wxFuncionesMath.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  $(shell wx-config --libs --debug)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(shell wx-config --cflags --debug) $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix) $(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix) $(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix) $(IntermediateDirectory)/TrigonometricasClass.cpp$(ObjectSuffix) $(IntermediateDirectory)/ExponencialesClass.cpp$(ObjectSuffix) $(IntermediateDirectory)/LogaritmicasClass.cpp$(ObjectSuffix) $(IntermediateDirectory)/HiperbolicasClass.cpp$(ObjectSuffix) $(IntermediateDirectory)/OtrasClass.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/marcelds/Documentos/wxTest/wxFuncionesMath/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix): MainFrame.cpp $(IntermediateDirectory)/MainFrame.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/marcelds/Documentos/wxTest/wxFuncionesMath/MainFrame.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MainFrame.cpp$(DependSuffix): MainFrame.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MainFrame.cpp$(DependSuffix) -MM "MainFrame.cpp"

$(IntermediateDirectory)/MainFrame.cpp$(PreprocessSuffix): MainFrame.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MainFrame.cpp$(PreprocessSuffix) "MainFrame.cpp"

$(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix): wxcrafter.cpp $(IntermediateDirectory)/wxcrafter.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/marcelds/Documentos/wxTest/wxFuncionesMath/wxcrafter.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/wxcrafter.cpp$(DependSuffix): wxcrafter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/wxcrafter.cpp$(DependSuffix) -MM "wxcrafter.cpp"

$(IntermediateDirectory)/wxcrafter.cpp$(PreprocessSuffix): wxcrafter.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/wxcrafter.cpp$(PreprocessSuffix) "wxcrafter.cpp"

$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix): wxcrafter_bitmaps.cpp $(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/marcelds/Documentos/wxTest/wxFuncionesMath/wxcrafter_bitmaps.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(DependSuffix): wxcrafter_bitmaps.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(DependSuffix) -MM "wxcrafter_bitmaps.cpp"

$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(PreprocessSuffix): wxcrafter_bitmaps.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(PreprocessSuffix) "wxcrafter_bitmaps.cpp"

$(IntermediateDirectory)/TrigonometricasClass.cpp$(ObjectSuffix): TrigonometricasClass.cpp $(IntermediateDirectory)/TrigonometricasClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/marcelds/Documentos/wxTest/wxFuncionesMath/TrigonometricasClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TrigonometricasClass.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TrigonometricasClass.cpp$(DependSuffix): TrigonometricasClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TrigonometricasClass.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TrigonometricasClass.cpp$(DependSuffix) -MM "TrigonometricasClass.cpp"

$(IntermediateDirectory)/TrigonometricasClass.cpp$(PreprocessSuffix): TrigonometricasClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TrigonometricasClass.cpp$(PreprocessSuffix) "TrigonometricasClass.cpp"

$(IntermediateDirectory)/ExponencialesClass.cpp$(ObjectSuffix): ExponencialesClass.cpp $(IntermediateDirectory)/ExponencialesClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/marcelds/Documentos/wxTest/wxFuncionesMath/ExponencialesClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ExponencialesClass.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ExponencialesClass.cpp$(DependSuffix): ExponencialesClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ExponencialesClass.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ExponencialesClass.cpp$(DependSuffix) -MM "ExponencialesClass.cpp"

$(IntermediateDirectory)/ExponencialesClass.cpp$(PreprocessSuffix): ExponencialesClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ExponencialesClass.cpp$(PreprocessSuffix) "ExponencialesClass.cpp"

$(IntermediateDirectory)/LogaritmicasClass.cpp$(ObjectSuffix): LogaritmicasClass.cpp $(IntermediateDirectory)/LogaritmicasClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/marcelds/Documentos/wxTest/wxFuncionesMath/LogaritmicasClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LogaritmicasClass.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LogaritmicasClass.cpp$(DependSuffix): LogaritmicasClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LogaritmicasClass.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LogaritmicasClass.cpp$(DependSuffix) -MM "LogaritmicasClass.cpp"

$(IntermediateDirectory)/LogaritmicasClass.cpp$(PreprocessSuffix): LogaritmicasClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LogaritmicasClass.cpp$(PreprocessSuffix) "LogaritmicasClass.cpp"

$(IntermediateDirectory)/HiperbolicasClass.cpp$(ObjectSuffix): HiperbolicasClass.cpp $(IntermediateDirectory)/HiperbolicasClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/marcelds/Documentos/wxTest/wxFuncionesMath/HiperbolicasClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/HiperbolicasClass.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/HiperbolicasClass.cpp$(DependSuffix): HiperbolicasClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/HiperbolicasClass.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/HiperbolicasClass.cpp$(DependSuffix) -MM "HiperbolicasClass.cpp"

$(IntermediateDirectory)/HiperbolicasClass.cpp$(PreprocessSuffix): HiperbolicasClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/HiperbolicasClass.cpp$(PreprocessSuffix) "HiperbolicasClass.cpp"

$(IntermediateDirectory)/OtrasClass.cpp$(ObjectSuffix): OtrasClass.cpp $(IntermediateDirectory)/OtrasClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/marcelds/Documentos/wxTest/wxFuncionesMath/OtrasClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/OtrasClass.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/OtrasClass.cpp$(DependSuffix): OtrasClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/OtrasClass.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/OtrasClass.cpp$(DependSuffix) -MM "OtrasClass.cpp"

$(IntermediateDirectory)/OtrasClass.cpp$(PreprocessSuffix): OtrasClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/OtrasClass.cpp$(PreprocessSuffix) "OtrasClass.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


